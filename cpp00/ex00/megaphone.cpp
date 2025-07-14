/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:49:28 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/13 09:13:45 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char**av)
{
    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1 ; av[i] ; i++)
    {
        std::string str;
        for(int j = 0; av[i][j];j++)
            str += std::toupper(av[i][j]);
        std::cout<< str;
    }
    std::cout << std::endl;
    return (0);
}