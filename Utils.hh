//
// Created by diguie_t on 3/1/2018.
//

#ifndef QUANTUMHASHCODE18_UTILS_HH
#define QUANTUMHASHCODE18_UTILS_HH

#include <vector>
#include <string>
#include <sstream>
#include <fstream>

class Utils {
public:
	template <typename T>
	static std::vector<T> parseLine(const std::string &line) {
		std:: vector<T> tokens;
		std::stringstream ss(line);
		T tmp;
		while(ss >> tmp) {
			tokens.push_back(tmp);
		}
		return (tokens);
	}

	static std::string readFile(std::string const &file);

	static std::vector<std::string> split(
			const std::string &str,
			const std::string &separator
	);
	static std::vector<std::string> splitAtMax(
			const std::string &str,
			const std::string &separator,
			int max
	);

};

#endif //QUANTUMHASHCODE18_UTILS_HH
