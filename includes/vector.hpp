#pragma once

#include <memory>

class allocator;

template < class T, class Alloc = allocator<T> > class vector
{
	private:
	
	public:
		// constructor
		explicit 							vector (const allocator_type& alloc = allocator_type());
		explicit 							vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
		template <class InputIterator>		vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());
		void								vector (const vector& x);

		// destructor
		~vector();

		// begin
		iterator 							begin();
		const_iterator 						begin() const;

		// end
		iterator 							end();
		const_iterator 						end() const;

		// rbegin
		reverse_iterator 					rbegin();
		const_reverse_iterator 				rbegin() const;

		// rend
		reverse_iterator 					rend();
		const_reverse_iterator 				rend() const;

		// size
		size_type 							size() const;

		// max_size
		size_type 							max_size() const;

		// resize
		void 								resize (size_type n, value_type val = value_type());

		// capacity
		size_type 							capacity() const;
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
