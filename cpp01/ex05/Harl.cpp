/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-15 09:18:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2025-08-15 09:18:13 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl ;
}


void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}


void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<< std::endl;
    
}


void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    
}


void Harl::complain(std::string level)
{
    void (Harl::*func[4])() = {&Harl::warning,&Harl::error,&Harl::info, &Harl::debug };
    std::string helper[4] = {"WARNING", "ERROR", "INFO", "DEBUG"};
    int i = 0;
    if (!level.empty())
    {
        while(i < 4)
        {
            if (helper[i] == level)
            {
                (this->*func[i])();
                break;
            }
            i++;
        }
    }
}