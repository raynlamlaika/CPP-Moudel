/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 15:18:55 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-05 15:18:55 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

void PhoneBook::add_contact()
{
    int i = contact[index].set_contat();
    if (i == 0)
        return ;
    index = (index + 1) % 8;
    if (count_contact < 8)
        count_contact++;
    return ;
};

void PhoneBook::search_contact()
{
    if ("1")
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
        std::cout << "nullptr detected" << std::endl ;
        exit (1);
    }
    if (input_s.empty())
        return ;
    for (int ind = 0 ; input_s[ind]; ind++)
    {
        if(ind > 1)
        {
            std::cout << "invalid input" << std::endl;
            return ;
        }
        if(std::isdigit(input_s[ind]))
            ;
        else
        {
            std::cout << "invalid input" << std::endl;
            return ;
        }
    }
    int index_c;
    std::istringstream iss(input_s);
    iss >> index_c;
    if (index_c > count_contact || index_c > 8 || index_c < 0 )
    {
        std::cout << "invalid index " <<  std::endl;
        return ;
    }
    contact[index_c].display_cntct(index_c);
    return ;
}


PhoneBook::PhoneBook() {
	index = 0;
	count_contact = 0;
}
