#pragma once

namespace ft
{
    struct true_type {
        static const bool value = true;
        typedef bool value_type;
        typedef true_type type;
    };

    struct false_type {
        static const bool value = false;
        typedef bool value_type;
        typedef false_type type;
    };

    template < class T >
    struct is_integral : public false_type {};

    template <>
    struct is_integral< bool > : public true_type {};

    template <>
    struct is_integral< char > : public true_type {};

    template <>
    struct is_integral< char16_t > : public true_type {};

    template <>
    struct is_integral< char32_t > : public true_type {};

    template <>
    struct is_integral< wchar_t > : public true_type {};

    template <>
    struct is_integral< signed char > : public true_type {};

    template <>
    struct is_integral< short int > : public true_type {};

    template <>
    struct is_integral< int > : public true_type {};

    template <>
    struct is_integral< long int > : public true_type {};

    template <>
    struct is_integral< long long int > : public true_type {};

    template <>
    struct is_integral< unsigned char > : public true_type {};

    template <>
    struct is_integral< unsigned short int > : public true_type {};

    template <>
    struct is_integral< unsigned int > : public true_type {};

    template <>
    struct is_integral< unsigned long int > : public true_type {};

    template <>
    struct is_integral< unsigned long long int > : public true_type {};
}