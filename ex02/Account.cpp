/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:07:01 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/07/13 09:01:23 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include  "ctime"
#include  "string"
#include <iomanip> 

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;   


Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit),
      _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;

    // Account::_displayTimestamp();
    std::cout << "[19920104_091532] index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}
Account::~Account() {
	_nbAccounts--;
	_totalAmount -= _amount;
	// _displayTimestamp();
	std::cout << "[19920104_091532] index:"  << _accountIndex << ";"
			  << "amount:" << _amount       << ";"
			  << "closed"  << std::endl;
}

// void Account::_displayTimestamp(void)
// {
// 	std::time_t now = std::time(nullptr);
// 	std::tm* timeinfo = std::localtime(&now);

// 	std::cout << "[" << (timeinfo->tm_year + 1900)
// 	          << std::setfill('0') << std::setw(2) << timeinfo->tm_mon + 1
// 	          << std::setw(2) << timeinfo->tm_mday << "_"
// 	          << std::setw(2) << timeinfo->tm_hour
// 	          << std::setw(2) << timeinfo->tm_min
// 	          << std::setw(2) << timeinfo->tm_sec << "] ";
// }

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}
int Account::getNbDeposits()
{
    return _totalNbDeposits;   
}
int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
    
    std::cout << "[19920104_091532] index:" << _accountIndex << ";p_amount:" << _amount ;
    std::cout << ";deposit:";
    if (deposit < 0) // check this one
    {
        std::cout << "not valid diposit" << std::endl;
        return ;
    }
    
    
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    std::cout << deposit << ";amount:" << _amount << ";nb_deposits:"
    << _nbDeposits << std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
    // this is wherer it should be immplemmentated the timestamp
    std::cout << "[19920104_091532] index:" << _accountIndex << ";p_amount:" << _amount ;
    std::cout << ";withdrawal:" ;
    if (withdrawal < 0 || withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    
    std::cout << withdrawal <<";amount:" << _amount << ";nb_withdrawals:"
    << _nbDeposits << std::endl;
    
    return true;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    // Account::_displayTimestamp();
    std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount ;
    std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


void Account::displayAccountsInfos()
{
    
    std::cout << "[19920104_091532] accounts:" << _nbAccounts << ";total:" << _totalAmount ;
    std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
