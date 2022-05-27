#pragma once

#include <memory>

namespace ft
{
	class stack
	{
		private:
		
		public:
			explicit 			stack (const container_type& ctnr = container_type());
			~stack();

			// empty
			bool 				empty() const;

			// size
			size_type 			size() const;

			// top
			value_type& 		top();
			const value_type& 	top() const;

			// push
			void 				push (const value_type& val);

			// pop
			void 				pop();

			stack &operator=(const stack &copy);
			template <class T, class Alloc> bool operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
			template <class T, class Alloc> bool operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
			template <class T, class Alloc> bool operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
			template <class T, class Alloc> bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
			template <class T, class Alloc> bool operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
			template <class T, class Alloc> bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
	}
}

