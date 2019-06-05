/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:06:07 by tnghondz          #+#    #+#             */
/*   Updated: 2019/06/05 12:06:11 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main(int argc, char **argv){
    int count = 1;
    PrintCapital printcapital;

    if (argc < 2){
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

    while(count < argc){
        printcapital.printString(argv[count++]);
    }
    std::cout << std::endl;
    return(0);
}
