/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:32:41 by schennal          #+#    #+#             */
/*   Updated: 2024/08/13 17:38:11 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

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

template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T &a, const T &b){
    return (a < b) ? a : b;
}

template <typename T>
T max(const T &a, const T &b){
    return (a > b) ? a : b;
}


#endif