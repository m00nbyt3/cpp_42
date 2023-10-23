/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:30:30 by ycarro            #+#    #+#             */
/*   Updated: 2023/10/23 16:52:18 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

//Prototypes
void	invalidInput(int argc);

int main(int argc, char const **argv)
{
	//Variable declarations
	std::string	text;
	std::string filename;
	std::string word;
	bool notFirstLine;
	bool notFirstWord;

	//Find errors on input
	invalidInput(argc);

	//Getting the files ready
	filename = argv[1];
	std::ifstream OrigFile(filename);
	std::ofstream NewFile(filename + ".replace");

	//Replace two words
	notFirstLine = false;
	while(getline(OrigFile, text))
	{
		if (notFirstLine)
			NewFile << std::endl;
		notFirstLine = true;
		std::istringstream iss(text);
		iss >> word;
		notFirstWord = false;
		while (iss)
		{
			if (notFirstWord)
				NewFile << ' ';
			notFirstWord = true;
			if (word == argv[2])
				NewFile << argv[3];
			else
				NewFile << word;
			iss >> word;
		}
	}

	//Closing used files
	OrigFile.close();
	NewFile.close();

	return 0;
}

void	invalidInput(int argc)
{
	//No file given
	if (argc == 1)
	{
		std::cout << "No file given. Input a file.";
		exit(1);
	}

	//No strings to replace given
	if (argc < 4)
	{
		std::cout << "No words to search and replace. Input two words.";
		exit(1);
	}
}