/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileOperator.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 20:26:10 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 22:31:04 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEOPERATOR_HPP
# define FILEOPERATOR_HPP

#include <string>

class FileOperator {
	public:
		static std::string read_file(std::string& file_name);
		static std::string replace_str(std::string origin, std::string target, std::string replacement);
		static void write_file(std::string file_name, std::string content);
	private:
		FileOperator();
};

#endif