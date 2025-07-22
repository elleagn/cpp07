/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:01:02 by gozon             #+#    #+#             */
/*   Updated: 2025/07/22 17:29:20 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void addOne(int& nb) {
    nb++;
}

void printOne(const int& nb) {
    std::cout << nb << std::endl;
}

int main(void) {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter(array, 10, addOne);

    std::cout << "Int array:" << std::endl;
    iter(array, 10, printVar);

    std::string strs[3] = {"Hello", "42", "blbl"};
    std::cout << "String array:" << std::endl;
    iter(strs, 3, printVar);
    return (0);
}
