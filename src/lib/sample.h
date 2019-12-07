
#include <iostream>
#include <locale>
#include <map>
#include <vector>
#include <cctype>
#include <fstream>
#include <algorithm>
#include <string>

#ifndef LIB_SAMPLE_H_
#define LIB_SAMPLE_H_

namespace template_repository {

[[nodiscard]] bool pathfinder(const std::string a);

[[nodiscard]] bool words_checker(const std::map<std::string, size_t> b);

} // namespace template_repository

#endif // LIB_SAMPLE_H_
