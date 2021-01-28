#include <string>
#include "File.h"
#include <fstream>
#include <sstream>

File::File() {
	// File pointer
	std::fstream fin;

	// Open an existing file
	fin.open("reportcard.csv",  std::ios::out| std::ios::app);

	std::vector<std::string> row;
	std::string line, word, temp;

	while (fin >> temp) {

		row.clear();

		std::getline(fin, line);

		std::stringstream s(line);
		while (std::getline(s, word, ' ')) {
			row.push_back(word);
		}
		for (int i = 0; i < row.size(); ++i){
			/* code */
		}
	}
}