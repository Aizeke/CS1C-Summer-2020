// hw15.cpp
// to illustrate stl containers & iterators

/*************************************************************************
 * AUTHOR     : Isaac Guido
 * HW15       : stl containers & iterators
 * CLASS      : CS 1C
 * SECTION    : July 23 2020
*************************************************************************/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

// function & class definitions go into hw15.cpp:

// hw15.cpp

namespace hw15 {

//
// list conainter, iterator example code adapted from Chapter 20.4
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//------------------------------------------------------------------------------

template<typename Elem>
struct Link
{
    Link *prev;    // previous link
    Link *succ;    // successor (next) link
    Elem val;     // the value
    Link(const Elem& v = Elem(), Link* p = 0, Link* s = 0) : val{v}, prev{p}, succ{s} { }
};

//--Q#3-------------------------------------------------------------------------

template<typename Elem>
class list
{
    // representation and implementation details
public:
    class iterator;         // forward declaration of member type: class iterator
    class const_iterator;   // forward declaration of member type: class const_iterator

    list() : first(new Link<Elem>()), last{first} { }
    ~list()
    {
        while (first != last)
        {
            Link<Elem> *next = first->succ;
            delete first;
            first = next;
        }
        delete last;
    }

    iterator begin();   // iterator to first element
    iterator end();     // iterator to one beyond last element

    // add missing const iterators begin, end here

    iterator begin() const;  // constant iterator to first element
    iterator end() const;    // constant iterator to one beyond last element

    iterator insert(iterator p, const Elem& v); // insert v into list after p
    iterator erase(iterator p);                 // remove p from the list

    void push_back(const Elem& v);  // insert v at end
    void push_front(const Elem& v); // insert v at front
    void pop_front();   // remove the first element
    void pop_back();    // remove the last element

    Elem& front();      // the first element
    Elem& back();       // the last element

    Link<Elem>* first;
    Link<Elem>* last;   // one-beyond-the-last link
};

//--Q#4-------------------------------------------------------------------------

template<typename Elem>
class list<Elem>::iterator // definition for class iterator
{
    Link<Elem> *curr;   // current node
public:
    iterator() : curr(nullptr) {}
    iterator(Link<Elem>* p) : curr{p} { }
    iterator& operator++() { curr = curr->succ; return *this; } // forward
    iterator& operator--() { curr = curr->prev; return *this; } // backwards
    Elem& operator*() { return curr->val; } // get value (dereference)
    bool operator==(const iterator& rhs) const { return curr == rhs.curr; }// lhs, rhs iterators point to the same node (equal)
    bool operator!=(const iterator& rhs) const { return curr != rhs.curr; }// lhs, rhs iterators do not point to the same node (not equal)
};

//--Q#4-------------------------------------------------------------------------

template<typename Elem>
class list<Elem>::const_iterator // definition for class const_iterator
{
    const Link<Elem>* curr;   // current node
                              // node pointed to by curr is immutable (i.e. can't be changed)
                              // fine to modify curr pointer itself (i.e. pointer value stored in curr)
                              // refer to const correctness reading
public:

    // add missing constructor, overloaded ++, --, *, ==, != operators here
    const_iterator(const Link<Elem>* p) : curr{p} { }

    const_iterator &operator++() { curr = curr->succ; return *this; } // forward
    const_iterator &operator--() { curr = curr->prev; return *this; } // backwards
    const_iterator &operator*() { return curr->val; }
    bool operator==(const const_iterator& rhs) const // lhs, rhs iterators point to the same node (equal)
    { return curr == rhs.curr; }
    bool operator!=(const const_iterator& rhs) const // lhs, rhs iterators do not point to the same node (not equal)
    { return curr != rhs.curr; }
};

//------------------------------------------------------------------------------

template<typename Elem> 
typename list<Elem>::iterator list<Elem>::begin()  // iterator to first element
{ 
    return iterator(first); 
}

//--Q#3-------------------------------------------------------------------------

// constant iterator to first element

template <typename Elem>
typename list<Elem>::iterator list<Elem>::begin() const // const iterator to first element
{
    return iterator(first);
}

//------------------------------------------------------------------------------

template<typename Elem> 
typename list<Elem>::iterator list<Elem>::end() // iterator to one beyond last element
{ 
    return iterator(last); 
}

//--Q#3-------------------------------------------------------------------------

// constant iterator to last element

template <typename Elem>
typename list<Elem>::iterator list<Elem>::end() const // const iterator to one beyond last element
{
    return iteartor(last);
}

//------------------------------------------------------------------------------

template<typename Elem> 
void list<Elem>::push_front(const Elem& v) // insert v at front
{
    first = new Link<Elem>(v,0,first);
}

//
// low algorithms adapted from Chapter 20.1, 20.4
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//--Q#5-------------------------------------------------------------------------

double* low_doubles(double* first, double* last)
    // return a pointer to the element in [first,last) that has the lowest value
{
    double l = -1;
    double* low;
    for(double* p = first; p!=last; ++p)
        if (*p < l) { low = p; l = *p; }
    return low;
}

//--Q#5-------------------------------------------------------------------------

// implement templated low algorithm here

template <typename it>
it low(it first, it last)
{
    it low = first;
    for( it p = first; p!=last; ++p)
        if( *p < *low) { low = p; }
    return low;
}

//------------------------------------------------------------------------------

} // hw15

//------------------------------------------------------------------------------

using namespace hw15;

//
// list conainter, iterator example code adapted from Chapter 20.4
// low algorithms adapted from Chapter 20.1, 20.4
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

int main()
{
    // console header
	cout << endl;
	cout << "************************************** " << endl;
	cout << "*           Running HW15             * " << endl;
	cout << "*      Programmed by Isaac Guido     * " << endl;
	cout << "*         CS1C MTWTh 3-5:20pm        * " << endl;
	cout << "************************************** " << endl;
	cout << endl;

	// Q#3,4 - containters & iterators

    list<int> myList;
    int x;
    while (cin >> x) myList.push_front(x);

	// Q#5 - low_doubles algorithm

    double d[] = {1,2,3,4,5,-99.25,100,10,500.123,5};       // init array of doubles
    vector<double> v = {1,2,3,4,5,-99.25,100,10,500.123,5}; // init identical vector of doubles

    double* lowa = low_doubles(&d[0], &d[9]); // min of array
    cout << endl << "low_doubles alg: double array min value is " << *lowa << endl << endl;

    double* middle = &v[0] + v.size()/2;
    double* lowv1 = low_doubles(&v[0], middle);          // min of vector first half
    double* lowv2 = low_doubles(middle, &v[0]+v.size()); // min of vector second half
    cout << "low_doubles alg: double vector min value first half is " << *lowv1 << endl;
    cout << "low_doubles alg: double vector min value second half is " << *lowv2 << endl << endl;

	// Q#5 - low algorithm

    lowa = low(&d[0], &d[9]); // min of array
    cout << "low alg: double array min value is " << *lowa << endl << endl;

    lowv1 = low(&v[0], middle);          // min of vector first half
    lowv2 = low(middle, &v[0]+v.size()); // min of vector second half
    cout << "low alg: double vector min value first half is " << *lowv1 << endl;
    cout << "low alg: double vector min value second half is " << *lowv2 << endl << endl;

    list<int>::iterator p = low(myList.begin(), myList.end()); // min of list
    if (p==myList.end())    // did we reach the end?
         cout << "low alg: the list is empty";
    else
         cout << "low alg: the lowest value in the list is " << *p << endl;

    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// Q#1
//  What is an stl container? stl iterator? stl algorithm? Give examples of each.
//      An STL container is like a queue or list, that stores elements. An STL
//      Iterator is what traverses the data, much like a pointer. STL Algoritm
//      is what searches or sorts through the container, They also set and
//      access the data.
// Q#2
//  Explain how the iterator architecture makes it possible to decouple algorithms 
//  from containers.
//      The iterator takes advantage of the complexity of seaching and mantaining the
//      container. This give alot of power to the developer who is able to use the
//      algorithms to create easy to access data.
// Q#5
//  The low_doubles algorithm will find the lowest value in an array of doubles. 
//  low_doubles has local variables l and low which are a source of errors. What 
//  kinds of issues might arise? 
//      The overall output seem that will give you the same output. Though I found
//      that the templated low seemed to not be functional  with certain dataTypes.