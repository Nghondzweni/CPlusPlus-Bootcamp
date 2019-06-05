/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:07:01 by tnghondz          #+#    #+#             */
/*   Updated: 2019/06/05 12:07:10 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define ERROR 0
#define ADD 1
#define SEARCH 2
#define EXIT 3
// #define HEADER "   INDEX  |FIRST NAME|LAST NAME||||"




class Contact{

   public:
   
        Contact(void);
        ~Contact(void);
        
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getLogin() const;
        std::string getPostalAddress() const;
        std::string getEmailAddress() const;
        std::string getPhoneNumber() const;
        std::string getBirthDate() const;
        std::string getFavoriteMeal() const;
        std::string getUnderwearColour() const;
        std::string getDarkestSecret() const;
        
        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickName(std::string);
        void setLogin(std::string);
        void setPostalAddress(std::string);
        void setEmailAddress(std::string);
        void setPhoneNumber(std::string);
        void setBirthDate(std::string);
        void setFavoriteMeal(std::string);
        void setUnderwearColour(std::string);
        void setDarkestSecret(std::string);



    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _login;
        std::string _postalAddress;
        std::string _emailAddress;
        std::string _phoneNumber;
        std::string _birthDate;
        std::string _favoriteMeal;
        std::string _underwearColour;
        std::string _darkestSecret;
};

typedef struct s_phonebook{
    int counter;
    
    Contact contact1;
    Contact contact2;
    Contact contact3;
    Contact contact4;
    Contact contact5;
    Contact contact6;
    Contact contact7;
    Contact contact8;
} phonebook;



#endif
