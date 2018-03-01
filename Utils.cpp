//
// Created by diguie_t on 3/1/2018.
//

#include "Utils.hh"

std::string Utils::readFile(std::string const &file) {
	std::ifstream t(file);
	return std::string((std::istreambuf_iterator<char>(t)),
					   std::istreambuf_iterator<char>());
}

std::vector<std::string> Utils::split(
		const std::string &str,
		const std::string &sep
) {
	std::vector<std::string> tokens;
	std::string s = str;
	size_t pos;
	while ((pos = s.find(sep)) != std::string::npos) {
		auto token = s.substr(0, pos);
		if (!token.empty()) {
			tokens.push_back(token);
		}
		s.erase(0, pos + sep.length());
	}
	if (!s.empty()) {
		tokens.push_back(s);
	}
	return tokens;
}

std::vector<std::string> Utils::splitAtMax(
		const std::string &str,
		const std::string &sep,
		int max
) {
	std::vector<std::string> tokens;
	std::string s = str;
	size_t pos;
	while (static_cast<int>(tokens.size()) < max && (pos = s.find(sep)) != std::string::npos) {
		auto token = s.substr(0, pos);
		if (!token.empty()) {
			tokens.push_back(token);
		}
		s.erase(0, pos + sep.length());
	}
	if (!s.empty()) {
		tokens.push_back(s);
	}
	return tokens;
}

