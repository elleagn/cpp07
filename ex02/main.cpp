/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:17:07 by gozon             #+#    #+#             */
/*   Updated: 2025/07/22 18:58:46 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

int main(void) {
    std::cout << "Construction with no parameters: ";
    Array<int> empty;
    if (empty.size() == 0)
        std::cout << GREEN << "OK" << RESET;
    else
        std::cout << RED << "FAIL" << RESET;
    std::cout << std::endl;

}
