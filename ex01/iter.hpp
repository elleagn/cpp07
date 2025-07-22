/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:55:14 by gozon             #+#    #+#             */
/*   Updated: 2025/07/22 17:24:58 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template<typename T>
void iter(T* array, size_t len, void (*fun)(T& element)) {

    for (size_t i = 0; i < len; i++) {
        fun(array[i]);
    }

}

template<typename T>
void iter(T* array, size_t len, void (*fun)(const T& element)) {

    for (size_t i = 0; i < len; i++) {
        fun(array[i]);
    }

}

template<typename T>
void printVar(const T& var) {

    std::cout << var << std::endl;

}

#endif
