/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedApp.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 21:03:27 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 22:06:18 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedApp.hpp"
#include <iostream>

SedApp::SedApp()
{
}

SedApp::~SedApp()
{
}

int SedApp::run(int argc, char *argv[])
{
	std::string contents;
	std::string file_name;
	std::string new_file_name;
	std::string new_contents;
	
	if (argc != 4)
		return write_err(INVALID_ARG_NUM);
	file_name = argv[1];
	try {
		contents = FileOperator::read_file(file_name);
		new_file_name = file_name + ".replace";
		new_contents = FileOperator::replace_str(contents, std::string(argv[2]), std::string(argv[3]));
		FileOperator::write_file(new_file_name, new_contents);
	} catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}

int SedApp::write_err(std::string err)
{
	std::cerr << err << std::endl;
	return (FAILURE);
}
