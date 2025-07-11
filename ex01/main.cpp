/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:11:37 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/11 16:05:07 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void Contact::set_contat()
{
    std::cout << "entre your name: ";
    if (!getline(std::cin, name))
        exit(1) ;
    std::cout << "entre your last name: ";
    if (!getline(std::cin, last_name))
        exit(1) ;
    std::cout << "entre your nickname: ";
    if (!getline(std::cin, nick_name))
        exit(1) ;
    std::cout << "entre your number: ";
    if (!getline(std::cin, phone_number))
        exit(1) ;
    std::cout << "entre your secret: ";
    if (!getline(std::cin, the_secret))
        exit(1) ;
};

void Contact::display_short_lst(int index)
{
    std::cout << std::setw(10) << std::right << index << "|";
    std::cout << std::setw(10) << std::right << name << "|";
    std::cout << std::setw(10) << std::right << last_name << "|";
    std::cout << std::setw(10) << std::right << nick_name << "|";
    std::cout << std::setw(10) << std::right << phone_number << "|";
    std::cout << std::setw(10) << std::right << the_secret << std::endl;
}

void PhoneBook::add_contact()
{
    contact[index].set_contat();
    index = (index + 1) % 2;
    if (count_contact < 2)
        count_contact++;
    return ;
};

void PhoneBook::search_contact()
{
    for (int index = 0 ; index < count_contact ; index++)
    {
        contact[index].display_short_lst(index);
    }
    return ;
}

int main()
{   
    PhoneBook phone;

    std::string line;

    while (3310)
    {
        std::cout << "phone Book input: ";
        if (!std::getline(std::cin, line))
        {
            std::cout << "      :nullptr detected" << std::endl ;
            exit (1);
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