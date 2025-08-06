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

#include "Contact.hpp"
#include "PhoneBook.hpp"

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

