/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:06:12 by tnghondz          #+#    #+#             */
/*   Updated: 2019/06/05 12:06:20 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
#define MEGAPHONE_HPP

#include <iostream>
#include <locale>
#include <string>

class PrintCapital {
    public :
        PrintCapital(void);
        ~PrintCapital(void);
        void printString(char *str);
};
#endif
