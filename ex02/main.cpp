/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:04:35 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 16:27:50 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF = str;
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "string address: " << &str << std::endl;
	std::cout << "stringPTR held: " <<stringPTR << std::endl;
	std::cout << "stringREF held: " <<&stringREF << std::endl;
	
	std::cout << "string    value: " << str << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
	
	
}