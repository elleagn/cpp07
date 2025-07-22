/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:07:54 by gozon             #+#    #+#             */
/*   Updated: 2025/07/22 19:02:54 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"

template<typename T>
class Array {

    private:
        T*      elements;
        size_t  n;

    public:

        // Construction/destruction
        Array(): elements(NULL), n(0) {};
        Array(size_t n): elements(new T[n]), n(n) {};
        ~Array() { delete[] elements; };

        // Copy
        Array(const Array& src): elements(new T[src.n]), n(src.n) {
            for (size_t i = 0; i < n; i++) {
                elements[i] = src.elements[i];
            }
        };

        Array& operator=(const Array& src) {
            if (&src != this) {
                delete[] elements;
                n = src.n;
                elements = new T[n];
                for (size_t i = 0; i < n; i++) {
                    elements[i] = src.elements[i];
                }
            }
            return (*this);
        };

        // Element access
        T& operator[](size_t i) {
            if (i >= n)
                throw std::out_of_range("Index out of bounds");
            return (elements[i]);
        }

        // Size
        size_t size() const {
            return (n);
        }
};

#endif
