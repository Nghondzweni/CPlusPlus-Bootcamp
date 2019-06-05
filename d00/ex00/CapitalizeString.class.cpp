/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CapitalizeString.class.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:05:59 by tnghondz          #+#    #+#             */
/*   Updated: 2019/06/05 12:06:03 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

PrintCapital::PrintCapital(){
    return ;
}

void PrintCapital::printString(char *str){
    std::locale loc;
    std::string toPrint(str);

    for(std::string::size_type i = 0; i < toPrint.length(); ++i){
        std::cout << (char)std::toupper(toPrint[i]);
    }
}

PrintCapital::~PrintCapital(void){
    return ;
}
