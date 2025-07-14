/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:11:37 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/14 11:55:55 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int check_line(std::string line)
{
    
    int i = 0;
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
        exit(1);
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

std::string Contact::get_name()
{
    return name;
}
void Contact::display_short_lst(int index)
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|";

    std::cout << std::setw(10) << index << std::endl;
    
    if (name.length() > 10)
        std::cout << std::setw(10) << name.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << name << "|";
    if (last_name.length() > 10)
        std::cout << std::setw(10) << last_name.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << last_name << "|";
    if (nick_name.length() > 10)
        std::cout << std::setw(10) << nick_name.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << nick_name << "|";
    if (phone_number.length() > 10)
        std::cout << std::setw(10) << phone_number.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << phone_number << "|";
    if (the_secret.length() > 10)
        std::cout << std::setw(10) << the_secret.substr(0, 9) + "." << "|" << std::endl;
    else
        std::cout << std::setw(10) << the_secret << std::endl;
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
    if (count_contact > 4)
    {
        for (int index = 0 ; index < 4 ; index++)
        {
            contact[index].display_short_lst(index);
        }
    }
    else
    {
        for (int index = 0 ; index < count_contact ; index++)
        {
            contact[index].display_short_lst(index);
        }
    }
    std::string input_s;
    std::cout << "Enter the index of the contact to view: ";
    if (!std::getline(std::cin, input_s))
    {
        std::cout << "\nnullptr detected" << std::endl ;
        exit (1);
    }
    for (int ind = 0 ; input_s[ind]; ind++)
    {
        if(std::isdigit(input_s[ind]))
            ;
        else
        {
            std::cout << "invalid input" << std::endl;
            return ;
        }
    }
    int index_c = std::stoi(input_s);
    if (index_c > count_contact)
    {
        std::cout << "invalid index " <<  std::endl;
        return ;
    }
    contact[index_c].display_short_lst(index_c);
    return ;
}

PhoneBook::PhoneBook() {
	index = 0;
	count_contact = 0;
}

int main()
{   
    PhoneBook phone;

    std::string line;


    while ("l3ami9")
    {
        std::cout << "phone Book input: ";
        if (!std::getline(std::cin, line))
        {
            std::cout << "\nnullptr detected" << std::endl ;
            exit (1);
        }
        if (check_line(line))
        {
            if (line == "ADD")
                phone.add_contact();
            else if (line == "SEARCH")
                phone.search_contact();
            else if (line == "EXIT")
                break ;
            else
            {
                std::cout << "valid args is : ADD, SEARSH, EXIT" << std::endl;
                continue;
            }
        }
    }
    return (0);
} 