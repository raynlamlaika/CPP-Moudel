/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cantact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 15:20:28 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-05 15:20:28 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_line(std::string line)
{
    int i = 0;

    if (line.empty())
        return (0);
    while  (line[i])
    {
        if  (!isprint(line[i]))
        {
            std::cout << "INVALID LINE PASSED, MAKE IN CLEAN INPUT" << std::endl ;
            return (0);
        }
        i++;
    }
    return (1);
}

void Contact::set_contat()
{
    std::cout << "entre your name: ";
    if (!getline(std::cin, name) || check_line(name) == 0)
        return ;
    std::cout << "entre your last name: ";
    if (!getline(std::cin, last_name)|| check_line(last_name) == 0)
        return ;
    std::cout << "entre your nickname: ";
    if (!getline(std::cin, nick_name) || check_line(nick_name) == 0)
        return ;
    std::cout << "entre your number: ";
    if (!getline(std::cin, phone_number) || check_line(phone_number) == 0 || std::isdigit([phone_number]))
        return ;
    std::cout << "entre your secret: ";
    if (!getline(std::cin, the_secret) || check_line(the_secret) == 0)
        return ;
};

std::string Contact::get_name()
{
    return name;
}
void Contact::display_short_lst(int index)
{
    if (index == 0)
    {
        std::cout << std::setw(10) << "Index" << "|";
        std::cout << std::setw(10) << "First Name" << "|";
        std::cout << std::setw(10) << "Last Name" << "|";
        std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    }
    

    std::cout << std::setw(10) << index << "|";
    if (name.length() > 10)
        std::cout << std::setw(10) << name.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << name << "|";
    if (last_name.length() > 10)
        std::cout << std::setw(10) << last_name.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << last_name << "|";
    if (nick_name.length() > 10)
        std::cout << std::setw(10) << nick_name.substr(0, 9) + "." << "|" << std::endl;
    else
        std::cout << std::setw(10) << nick_name << "|" << std::endl;
}


void Contact::display_cntct(int index)
{
    std::cout << std::setw(10) << "Index :" << index << std::endl;;
    std::cout << std::setw(10) << "First Name :" << name << std::endl;;
    std::cout << std::setw(10) << "Last Name :" << last_name << std::endl;;
    std::cout << std::setw(10) << "Nickname :" << nick_name << std::endl;
    std::cout << std::setw(10) << "phone_number :" << nick_name << std::endl;
    std::cout << std::setw(10) << "Nickname :" << nick_name << std::endl;

}
