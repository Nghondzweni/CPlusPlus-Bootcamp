/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:06:51 by tnghondz          #+#    #+#             */
/*   Updated: 2019/06/05 12:06:54 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(){
    return ;
}

Contact::~Contact(){
    return ;
}

std::string Contact::getFirstName() const{
    return this->_firstName;
}

std::string Contact::getLastName() const{
    return this->_lastName;
}

std::string Contact::getNickName() const{
    return this->_nickName;
}

std::string Contact::getLogin() const{
    return this->_login;
}

std::string Contact::getPostalAddress() const{
    return this->_postalAddress;
}

std::string Contact::getEmailAddress() const{
    return this->_emailAddress;
}
std::string Contact::getPhoneNumber() const{
    return this->_phoneNumber;
}

std::string Contact::getBirthDate() const{
    return this->_birthDate;
}

std::string Contact::getFavoriteMeal() const{
    return this->_favoriteMeal;
}

std::string Contact::getUnderwearColour() const{
    return this->_underwearColour;
}

std::string Contact::getDarkestSecret() const{
    return this->_darkestSecret;
}

void Contact::setFirstName(std::string str){
    this->_firstName = str;
}

void Contact::setLastName(std::string str) {
    this->_lastName = str;
}

void Contact::setNickName(std::string str){
    this->_nickName = str;
}

void Contact::setLogin(std::string str) {
    this->_login = str;
}

void Contact::setPostalAddress(std::string str){
    this->_postalAddress = str;
}

void Contact::setEmailAddress(std::string str){
    this->_emailAddress = str;
}
void Contact::setPhoneNumber(std::string str){
    this->_phoneNumber = str;
}

void Contact::setBirthDate(std::string str){
    this->_birthDate = str;
}

void Contact::setFavoriteMeal(std::string str){
    this->_favoriteMeal = str;
}

void Contact::setUnderwearColour(std::string str){
    this->_underwearColour = str;
}

void Contact::setDarkestSecret(std::string str){
    this->_darkestSecret = str;
}

