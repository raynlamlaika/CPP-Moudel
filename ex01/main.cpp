/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:11:37 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/02 17:07:15 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void Contact::print_contacts()
{
    return ;
}

void Contact::set_contact()
{
    std::cout<< "entre your name" << std::endl;
    if (!std::getline(std::cin, name))
        exit(1); // check on it if i need to free or hold some thing
    if (!std::getline(std::cin, lastname))
        exit(1);
    if (!std::getline(std::cin, nickname))
        exit(1);
    if (!std::getline(std::cin, number))
        exit(1);
    if (!std::getline(std::cin, secret))
        exit(1);
    return ;
}

std::string Contact::get_name() const 
{
    return name;
}

void Contact::print_contacts() const 
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Last Name: " << lastname << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Secret: " << secret << std::endl;
}

// Phonebook::Phonebook() : contact(0) {}

// void Phonebook::add_contact()
// {
//     if (contacts >= 8)
//         contacts = 0; // Overwrite old contacts in circular buffer

//     std::cout << "Adding contact at index: " << contacts << std::endl;
//     contact[contacts].set_contact();
//     contacts++;
// }

void Phonebook::add_contact()
{
    static int index = 0; // To cycle through 0-7
    contact[index % 8].set_contact(); // Overwrites if t is full
    index++;
    return ;
}

// void Phonebook::search_contact()
// {
//     std::string line;
//     std::cout << "search foe contact" << std::endl;
//     if (!std::getline(std::cin, line))
//         exit(1);
// }


int main()
{   
    std::string line;
    Phonebook phone;

    while (1337)
    {
        std::cout << "phone Book input: ";
        if (!std::getline(std::cin, line))
        {
            std::cout << "phonebook :nullptr detected" << std::endl ;
            continue ;
        }
        if (line == "ADD")
            phone.add_contact();
        else if (line == "SEARCH")
            phone.search_contact();
        else if (line == "EXIT")
            break ;
        else
            continue;
    }
    return (0);
} 