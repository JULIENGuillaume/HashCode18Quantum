/*
** Toolbox.cpp for BeyondLight in /home/guillaume/delivery/BeyondLight/Toolbox.cpp
**
** Made by Guillaume Julien
** Login   <guillaume.julien@epitech.eu>
**
** Started on  Fri Nov 10 12:25:33 2017 Guillaume Julien
** Last update Fri Nov 10 12:25:33 2017 Guillaume Julien
*/

#include <cstdio>
#include <cstring>
#include <openssl/sha.h>
#include <random>
#include <functional>
#include <iostream>
#include <algorithm>
#include "Toolbox.hh"

#ifdef WIN32

#include "windows.h"

#endif // WIN32

std::vector<std::string> split(
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

std::vector<std::string> splitAtMax(
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
