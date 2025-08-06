

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

#include "Contact.hpp"

class  PhoneBook
{
	private:
		Contact	contact[8];
		int		index;
		int		count_contact ;
	public:
		void add_contact();
		void search_contact();
		PhoneBook();
};

#endif