#include <string>
#include "File.h"
#include <fstream>
#include <sstream>

File::File() {
	std::fstream fin;

	fin.open("file.txt",  std::ios::in);

	std::vector<std::string> row;
	std::string line, word, temp;

	while (fin >> temp) {

		row.clear();

		std::getline(fin, line);

		std::stringstream s(line);
		while (std::getline(s, word, ' ')) {
			row.push_back(word);
		}
		/*for (int i = 0; i < row.size(); ++i){
			/* code *
		}*/
	}
}