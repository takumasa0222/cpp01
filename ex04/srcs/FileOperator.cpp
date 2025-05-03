/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileOperator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 20:29:37 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 22:52:33 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "FileOperator.hpp"
#include <iostream>

std::string FileOperator::read_file(std::string& file_name)
{
	std::string ret;
	std::string temp;
	std::ifstream file(file_name.c_str());
	bool is_first;
	
	is_first = true;
	if (!file)
		throw std::runtime_error("Failed to open file: " + file_name);
	while (std::getline(file, temp))
	{
		if (!is_first)
			ret += "\n";
		ret += temp;
		is_first = false;
	}
	return ret;
}

std::string FileOperator::replace_str(std::string origin, std::string target, std::string replacement)
{
	std::size_t replace_pos;
	int tareget_size;

	tareget_size = target.size();
	if (origin.empty() || !tareget_size)
		return origin;
	while (true)
	{
		replace_pos = origin.find(target);
		if (replace_pos == std::string::npos)
			break;
		origin.erase(replace_pos, tareget_size);
		origin.insert(replace_pos, replacement);
	}
	return (origin);
}

void FileOperator::write_file(std::string file_name, std::string content)
{
	std::ofstream file(file_name.c_str());
	if (!file)
		throw std::runtime_error("Failed to write file: " + file_name);
	file << content; 
}
