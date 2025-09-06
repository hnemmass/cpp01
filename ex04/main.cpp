/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:55:45 by hnemmass          #+#    #+#             */
/*   Updated: 2025/09/04 16:44:28 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string content;
	
	if (ac == 4)
	{
		std::string	filename = av[1];
		std::string	s1 = av[2];
		std::string	s2 = av[3];

		std::ifstream infile(filename.c_str());
		if (!infile.is_open())
		{
			std::cerr << "error occured while opening the file."<< std::endl;
			return (1);
		}
		std::ofstream outfile((filename + ".replace").c_str());
		if (!outfile.is_open())
		{
			infile.close();
			std::cerr << "error occured while opening a file."<< std::endl;
			return (1);
		}

		while (std::getline(infile, content))
		{
			size_t		pos = 0;
			std::string	new_line;
			while (true)
			{
				size_t found = content.find(s1, pos);
				if (found == std::string::npos)
				{
					new_line += content.substr(pos);
					break ;
				}
				new_line += content.substr(pos, found - pos);
				new_line += s2;
				pos += found + s1.length();
			}
			outfile << new_line << std::endl;
		}
	}
	else
	{
		std::cerr << "------------------ wrong number of arguments --------------------" << std::endl;
		std::cerr << "---------- try: file - string to replace - replacement ----------" << std::endl;
	}
}
