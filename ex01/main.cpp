/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:11:37 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/03 17:09:46 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void Contact::set_contat()
{
    std::cout << "entre your name: " << std::endl;
    if (!getline(std::cin, name))
        return ;
    std::cout << "entre your last name: " << std::endl;
    if (!getline(std::cin, last_name))
        return ;
    std::cout << "entre your nickname: " << std::endl;
    if (!getline(std::cin, nick_name))
        return ;
    std::cout << "entre your number: " << std::endl;
    if (!getline(std::cin, phone_number))
        return ;
    std::cout << "entre your secret: " << std::endl;
    if (!getline(std::cin, the_secret))
        return ;
};

void Contact::display_short_lst(int index)
{
    std::cout << "|" << name << "|" << std::endl;
    return;
}

void PhoneBook::add_contact()
{
    contact[index].set_contat();
    index = (index + 1) % 8; // to have in cyrcular in i
    if (count_contact < 8)
        count_contact++;
    return ;
};

void PhoneBook::search_contact()
{
    std::cout << "sort list " << std::endl;
    for(int i = 0; i < count_contact  ; i++)
        contact[i].display_short_lst(count_contact);
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