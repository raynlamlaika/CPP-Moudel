/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:45:59 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/14 11:13:27 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Contact
{
	private:
		std::string name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string the_secret;
	public:
		void		set_contat();
		void		display_contact();
		void		display_short_lst(int index);
		std::string get_name();
};

class  PhoneBook
{
	private:
		Contact	contact[8];
		int		index;
		int		count_contact ;
	public:
		PhoneBook();
		void add_contact();
		void search_contact();
		// void display_all();
};




#endif