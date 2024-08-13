/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:39:59 by schennal          #+#    #+#             */
/*   Updated: 2024/08/13 18:27:03 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

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

template <class T>
void iter(T *array, unsigned int length, void (*func)(T const &)){
    for (unsigned int i = 0; i < length; i++){
        func(array[i]);
    }
}

template <class T>
void printGreen(T const &x){
    std::cout << GREEN << x << DEFAULT << std::endl;
}

template <class T>
void printYellow(T const &x){
    std::cout << YELLOW << x << DEFAULT << std::endl;
}

template <class T>
void print(T const &x) {
    std::cout << x << std::endl;
}

#endif