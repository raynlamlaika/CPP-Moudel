/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:45:59 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/02 17:01:57 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <string>
#include <cstring>

class Contact
{
    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string number;
        std::string secret;
    public:
        void set_contact();
        void print_contacts();
        std::string get_name() const;
        void print_contacts() const;
};

class Phonebook
{
    private:
        Contact contact[8];
        int     contacts;
    public:
        Phonebook();
        void add_contact();
        void  search_contact();
};

#endif