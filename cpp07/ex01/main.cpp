/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:40:03 by schennal          #+#    #+#             */
/*   Updated: 2024/08/13 18:14:04 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){
    int num[] = {0, 1, 2, 3, 4, 5};
    std::string str[] = {"Hello", "how", "are", "you", "?"};
    
    iter(num, 6, printGreen<int>);
    iter(str, 5, printYellow<std::string>); 
}

