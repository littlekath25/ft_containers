#pragma once

#include <memory>

class allocator;

template < class T, class Alloc = allocator<T> > class vector
{
	private:
	
	public:
		// Constructor
		explicit 							vector (const allocator_type& alloc = allocator_type());
		explicit 							vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
		template <class InputIterator>		vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());
		void								vector (const vector& x);

		// Destructor
		~vector();

		// Begin
		iterator 							begin();
		const_iterator 						begin() const;

		// End
		iterator 							end();
		const_iterator 						end() const;

		// rbegin
		// rend
		
		// size
		// max_size
		// resize
		// capacity
		// empty
		// reserve

		// at
		// front
		// back

		// assign
		// push_back
		// pop_back
		// insert
		// erase
		// swap
		// clear
		
		// get_allocator

		vector &operator=(const vector &copy);
        // operator[]
		// operator[]
		// operator==
		// operator!=
		// operator<
		// operator<=
		// operator>
		// operator>=

		// swap
};
