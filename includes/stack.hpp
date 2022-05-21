#pragma once

# include <iostream>
# include <cstdlib>

#define SIZE 1000

template <class T> class Stack 
{
    public:
        Stack();

        void    push(T value);
        T       pop();
        T       top();

        bool    empty();
        int     size();

    private:
        int     _top;
        T       _stack[SIZE];
};
