/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:15:22 by schennal          #+#    #+#             */
/*   Updated: 2024/08/14 16:19:56 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	std::cout << CYAN << "------------------------------------------" << DEFAULT << std::endl;
	std::cout << GREEN << "Test default constructor" << DEFAULT << std::endl;
    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.size() << std::endl;
	std::cout << CYAN << "------------------------------------------" << DEFAULT << std::endl;

	std::cout << GREEN << "Test constructor with size" << DEFAULT << std::endl;
    Array<int> arr2(5);
    std::cout << "arr2 size: " << arr2.size() << std::endl;
    for (int i = 0; i < 5; i++) {
        arr2[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
    }
	std::cout << CYAN << "------------------------------------------" << DEFAULT << std::endl;

	std::cout << GREEN << "Test copy constructor" << DEFAULT << std::endl;
    Array<int> arr3(arr2);
    std::cout << "arr3 size: " << arr3.size() << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
    }
	std::cout << CYAN << "------------------------------------------" << DEFAULT << std::endl;

	std::cout << GREEN << "Test assignment operator" << DEFAULT << std::endl;
    Array<int> arr4;
    arr4 = arr2;
    std::cout << "arr4 size: " << arr4.size() << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "arr4[" << i << "] = " << arr4[i] << std::endl;
    }
	std::cout << CYAN << "------------------------------------------" << DEFAULT << std::endl;

	std::cout << GREEN << "Test out-of-bounds access" << DEFAULT << std::endl;
    try {
        std::cout << "arr2[10] = " << arr2[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	std::cout << CYAN << "------------------------------------------" << DEFAULT << std::endl;

    return 0;
}



