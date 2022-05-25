#pragma once


template < class Key,                                     // map::key_type
           class T,                                       // map::mapped_type
           class Compare = less<Key>,                     // map::key_compare
           class Alloc = allocator<pair<const Key,T> >    // map::allocator_type
           > class map;
{
    private:

	public:
		// constructor
		explicit 						map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
		template <class InputIterator>	map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
		map (const map& x);

		~map();

		map &operator=(const map &copy);
        // operator[]

		// begin
		// end
		// rbegin
		// rend
		
		// empty
        // size
		// max_size

        // insert
        // erase
        // swap
        // clear

        // key_comp
        // value_comp

        // find
		// count
		// lower_bound
		// upper_bound
        // equal_range

		// get_allocator

	private:

};
