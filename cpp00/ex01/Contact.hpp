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

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <string>
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
		void		display_cntct(int index);
		std::string get_name();
};

int check_line(std::string line);


#endif