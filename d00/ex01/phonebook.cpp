/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:06:57 by tnghondz          #+#    #+#             */
/*   Updated: 2019/06/05 12:07:00 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"



int checkCommand(std::string command){

    if(!command.compare("ADD"))
        return(ADD);
    else if (!command.compare("SEARCH"))
        return(SEARCH);
    else if (!command.compare("EXIT"))
        return(EXIT);
    else
        return(ERROR);
}

std::string truncateString(std::string str)
{
    if(str.length() > 10){
        return(str.substr(0, 9) + '.');
    }
    else
        return str;
}

void displayContacts(Contact contact[], int count){
    for(int i = 0; i < count; i++)
    {
            std::cout
                << std::setfill(' ') << std::setw(10) << (i + 1) << "|"
                << std::setfill(' ') << std::setw(10) << truncateString(contact[i].getFirstName()) << "|"
                << std::setfill(' ') << std::setw(10) << truncateString(contact[i].getLastName()) << "|"
                << std::setfill(' ') << std::setw(10) << truncateString(contact[i].getNickName()) << "|"
            << std::endl;
    }
    std::cout << std::endl;
}

int addContact(Contact *contact, int count){

    if(count > 7){
        std::cout << "Your PhoneBook is full, Please contact Coffee for help" << std::endl;
        return 0;
    }

    std::cout << "Please enter the contact's First Name" << std::endl;
    std::string firstName;
    std::cin >> firstName;

    std::cout << "Please enter the contact's Last Name" << std::endl;
    std::string lastName;
    std::cin >> lastName;
    
    std::cout << "Please enter the contact's Nick Name" << std::endl;
    std::string nickName;
    std::cin >> nickName;

    std::cout << "Please enter the contact's Login" << std::endl;
    std::string login;
    std::cin >> login;

    std::cout << "Please enter the contact's Postal Address" << std::endl;
    std::string postalAddress;
    std::cin >> postalAddress;
    
    std::cout << "Please enter the contact's Email Address" << std::endl;
    std::string emailAddress;
    std::cin >> emailAddress;

    std::cout << "Please enter the contact's Phone Number" << std::endl;
    std::string phoneNumber;
    std::cin >> phoneNumber;

    std::cout << "Please enter the contact's Birth Date" << std::endl;
    std::string birthDate;
    std::cin >> birthDate;

    std::cout << "Please enter the contact's Favorite Meal" << std::endl;
    std::string favoriteMeal;
    std::cin >> favoriteMeal;

    std::cout << "Please enter the contact's current underwear colour" << std::endl;
    std::string underwearColour;
    std::cin >> underwearColour;

    std::cout << "Please enter the contact's Darkest Secret" << std::endl;
    std::string darkestSecret;
    std::cin >> darkestSecret;

    contact->setFirstName(firstName);
    contact->setLastName(lastName);
    contact->setNickName(nickName);
    contact->setLogin(login);
    contact->setPostalAddress(postalAddress);
    contact->setEmailAddress(emailAddress);
    contact->setPhoneNumber(phoneNumber);
    contact->setBirthDate(birthDate);
    contact->setFavoriteMeal(favoriteMeal);
    contact->setUnderwearColour(underwearColour);
    contact->setDarkestSecret(darkestSecret);

    return (1);
}

void selectContact(Contact contacts[], int count){
    int index;
    while (42)
    {
        std::cout << "Please enter the index of the contact you want to display" << std::endl;
        std::cin >> index;
        if(index <= count)
        {
            std::cout << "First Name : " << contacts[index -1].getFirstName() << std::endl;
            std::cout << "Last Name : " << contacts[index -1].getLastName() << std::endl;
            std::cout << "Nickname : " << contacts[index -1].getNickName() << std::endl;
            std::cout << "Login : " << contacts[index -1].getLogin() << std::endl;
            std::cout << "Postal Address : " << contacts[index -1].getPostalAddress() << std::endl;
            std::cout << "Email Address : " << contacts[index -1].getEmailAddress() << std::endl;
            std::cout << "Phone Number : " << contacts[index -1].getPhoneNumber() << std::endl;
            std::cout << "Birth Date : " << contacts[index -1].getBirthDate() << std::endl;
            std::cout << "Favorite Meal : " << contacts[index -1].getFavoriteMeal() << std::endl;
            std::cout << "Underwear Colour : " << contacts[index -1].getUnderwearColour() << std::endl;
            std::cout << "Darkest Secret : " << contacts[index -1].getDarkestSecret() << std::endl;
            return ;
        } else {
            std::cout << "The contact requested does not exist"  << std::endl;
        }
        std::cout << std::endl;
    }
}


int main(void){
    
    Contact contacts[8];
    std::string command;
    int count = 0;

    while(1)
    {
        std::cout << "Please enter a command:  ADD | SEARCH | EXIT" << std::endl;
        std::cin >> command;

        switch(checkCommand(command)){
            case ADD :
                if(addContact(&contacts[count], count))
                    count++;
                break ;
            case SEARCH :
                std::cout << "|    INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
                displayContacts(contacts, count);
                selectContact(contacts, count);
                std::cout << std::endl;
                break ;
            case EXIT :
                std::cout << "Command entered is EXIT" << std::endl;
                return(0);
            case ERROR :
                std::cout << "ERROR, command not found" << std::endl;
                break ;
        }
    }
}
