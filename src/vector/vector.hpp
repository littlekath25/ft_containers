#pragma once

#include <memory>

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		public:
			// member types
			typedef T							value_type;
			typedef Alloc						allocator_type;
			typedef size_t						size_type;
			typedef std::ptrdiff_t 				difference_type;

			typedef T&							reference;
			typedef const T&					const_reference;
			typedef T*							pointer;
			typedef const T*					const_pointer;

			// TODO iterators

			// constructor
			explicit vector (const allocator_type& alloc = allocator_type()) : _array(0), _size(0), _capacity(0), _alloc(alloc);
	
			explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()) : _size(n), _capacity(n), _alloc(alloc) 
			{
				_array = _alloc.allocate(n);
				for (int i = 0; i < n; ++i)
					_array[i] = val;
			}

			template <class InputIterator> vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());

			void vector (const vector& x)
			{
				*this = x;
			}

			vector &operator= (const vector &x)
			{
				return (*this)
			}

			// destructor
			~vector() {
				if (_capacity != 0)
					_alloc.deallocate(_array, _capacity);
			}

			// begin
			iterator begin();
			const_iterator begin() const;

			// end
			iterator end();
			const_iterator end() const;

			// rbegin
			reverse_iterator rbegin();
			const_reverse_iterator rbegin() const;

			// rend
			reverse_iterator rend();
			const_reverse_iterator rend() const;

			// size
			size_type size() const;

			// max_size
			size_type max_size() const;

			// resize
			void resize (size_type n, value_type val = value_type());

			// capacity
			size_type capacity() const;

			// empty
			bool empty() const
			{
				return (_size == 0);
			}

			// reserve
			void reserve (size_type n);

			// at
			reference at (size_type n);
			const_reference at (size_type n) const;

			// front
			reference front();
			const_reference front() const;

			// back
			reference back();
			const_reference back() const;

			// assign
			template <class InputIterator> void assign (InputIterator first, InputIterator last);
			void assign (size_type n, const value_type& val);

			// push_back
			void push_back (const value_type& val)
			{
				if (_size == _capacity)
				{
					
				}
				_size++;
			}

			// pop_back
			void pop_back()
			{
				if (_size)
				{
					_alloc.destroy(_array + _size - 1);
					_size--;
				}
			}

			// insert
			iterator insert (iterator position, const value_type& val);
			void insert (iterator position, size_type n, const value_type& val);
			template <class InputIterator> void insert (iterator position, InputIterator first, InputIterator last);

			// erase
			iterator erase (iterator position);
			iterator erase (iterator first, iterator last);

			// swap
			void swap (vector& x);

			// clear
			void clear()
			{
				while (!empty())
					pop_back();
			}
			
			// get_allocator
			allocator_type get_allocator() const;

			template <class T, class Alloc> 
			bool operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)

			template <class T, class Alloc> 
			bool operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
	
			template <class T, class Alloc> 
			bool operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);

			template <class T, class Alloc> 
			bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);

			template <class T, class Alloc> 
			bool operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);

			template <class T, class Alloc> 
			bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);

			// swap
			template <class T, class Alloc> void swap (vector<T,Alloc>& x, vector<T,Alloc>& y);

		private:
			pointer				_array;
			size_type			_size;
			size_type			_capacity;
			allocator_type		_alloc;
	};
}
