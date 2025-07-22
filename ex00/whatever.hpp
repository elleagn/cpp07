/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:30:40 by gozon             #+#    #+#             */
/*   Updated: 2025/07/22 14:46:11 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b) {

    T tmp;

    tmp = a;
    a = b;
    b = tmp;

}

template<typename T>
T min(T a, T b) {

    if (a < b)
        return (a);
    return (b);

}

template<typename T>
T max(T a, T b) {

    if (a > b)
        return (a);
    return (b);

}

#endif
