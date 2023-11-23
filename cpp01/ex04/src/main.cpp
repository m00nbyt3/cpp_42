/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:30:30 by ycarro            #+#    #+#             */
/*   Updated: 2023/11/23 12:40:07 by ycarro           ###   ########.fr       */
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
	std::string toSearch;
	std::string replacement;
	//std::string newString;
	size_t		wordPos;
	size_t		wordLen;
	bool notFirstLine;

	//Find errors on input
	invalidInput(argc);

	//Defining variables
	filename = argv[1];
	toSearch = argv[2];
	replacement = argv[3];

	//Getting the files ready
	std::ifstream OrigFile(filename);
	std::ofstream NewFile(filename + ".replace");

	//Replace two words
	notFirstLine = false;
	while(getline(OrigFile, text))
	{
		if (notFirstLine)
			NewFile << std::endl;
		notFirstLine = true;
		if (text[0] == 0)
			continue;
		//newString = text;
		wordPos = text.find(toSearch);
		while (wordPos != std::string::npos)
		{
			wordLen = toSearch.length();
			text = text.substr(0, wordPos) + replacement + text.substr((wordPos+wordLen));
			wordPos = text.find(toSearch);
		}
		NewFile << text;
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
