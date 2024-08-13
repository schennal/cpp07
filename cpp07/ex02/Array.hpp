/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:15:19 by schennal          #+#    #+#             */
/*   Updated: 2024/08/13 19:03:54 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>  // For std::setprecision
#include <limits>   // For std::numeric_limits

#define DEFAULT   "\033[0m"
#define YELLOW    "\e[0;33m"
#define GREEN     "\033[1;32m"
#define CYAN      "\033[0;36m"
#define RED       "\e[0;31m"
/*
length = length
n = size
*/

// template <class T>
// class Array{
//     private:
//         T * array;
//         unsigned int length;

//     public:
//         Array();
//         Array(unsigned int size);
// 	    Array(const Array& copy);
// 	    Array& operator=(const Array& copy);
// 	    ~Array();

//         T & operator[] (unsigned int const index);
//         T const & operator[](unsigned int const index)const;
//         unsigned int size()const;
// };

// template <class T>
// Array<T>::Array() : array(NULL), length(0){}

// template <class T>
// Array<T>::Array(unsigned int size) : array(new T[size](), length(size)){}

// template <class T>
// Array<T>::Array(const Array &other) : array(new T[other.length](), length(other.length))
// {
// 	for (unsigned int i = 0; i < length; i++)
// 		array[i] = other.array[i];
// }

// template <class T>
// Array<T> &Array<T>::operator=(const Array &other)
// {
//     if (this != &other)
//     {
//         delete[] array;
//         length = other.length;
//         array = new T[length]();
//         for (unsigned int i = 0; i < length; ++i)
//         {
//             array[i] = other.array[i];
//         }
//     }
//     return *this;
// }

// template <class T>
// Array<T>::~Array()
// {
//     delete[] array;
// }

// template <class T>
// unsigned int Array<T>::size() const{
//     return(length);
// }

// template <class T>
// T &Array<T>::operator[](unsigned int index)
// {
//     if (index >= length)
//     {
//         throw std::out_of_range("Index out of bounds");
//     }
//     return array[index];
// }

// template <class T>
// const T &Array<T>::operator[](unsigned int index) const
// {
//     if (index >= length)
//     {
//         throw std::out_of_range("Index out of bounds");
//     }
//     return array[index];
// }


template <class T>
class Array {
private:
    T *array;
    unsigned int length;

public:
    Array();
    Array(unsigned int size);
    Array(const Array& copy);
    Array& operator=(const Array& copy);
    ~Array();

    T & operator[](unsigned int const index);
    T const & operator[](unsigned int const index) const;
    unsigned int size() const;
};

template <class T>
Array<T>::Array() : array(NULL), length(0) {}

template <class T>
Array<T>::Array(unsigned int size) : array(new T[size]()), length(size) {}

template <class T>
Array<T>::Array(const Array &other) : array(new T[other.length]()), length(other.length) {
    for (unsigned int i = 0; i < length; i++)
        array[i] = other.array[i];
}

template <class T>
Array<T> & Array<T>::operator=(const Array &other) {
    if (this != &other) {
        delete[] array;
        length = other.length;
        array = new T[length]();
        for (unsigned int i = 0; i < length; ++i) {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template <class T>
Array<T>::~Array() {
    delete[] array;
}

template <class T>
unsigned int Array<T>::size() const {
    return length;
}

template <class T>
T & Array<T>::operator[](unsigned int index) {
    if (index >= length) {
        throw std::out_of_range("Index out of bounds");
    }
    return array[index];
}

template <class T>
const T & Array<T>::operator[](unsigned int index) const {
    if (index >= length) {
        throw std::out_of_range("Index out of bounds");
    }
    return array[index];
}



#endif