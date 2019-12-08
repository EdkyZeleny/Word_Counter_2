#include <iostream>

#include "lib/sample.h"

using template_repository::pathfinder;
using template_repository::words_checker;

int main()
{
    setlocale(LC_CTYPE, "rus");

    std::string path;
    std::cout << "please, input there file source:" << std::endl;
    std::cin >> path;

    std::ifstream file_stream;
    file_stream.open(path);

    if (!pathfinder(path))
    {
        std::cout << "cannot open file. try another path." << std::endl;
        return 0;
    };

    std::map<std::string, size_t> word_to_count;

    std::string word;

    while (file_stream >> word)
    {
        ++word_to_count[word];
    }

    if (!words_checker(word_to_count))
    {
        std::cout << "file is empty of words" << std::endl;
        return 0;
    }

    std::vector<std::pair<std::string, size_t>> stats(word_to_count.begin(), word_to_count.end());

    std::sort(stats.begin(), stats.end(), [](auto& lhs, auto& rhs)
        {
            if (lhs.second == rhs.second)
            {
                return lhs.first < rhs.first;
            }
            return lhs.second > rhs.second;
        });

    for (auto& pair : stats)
    {
        std::cout << "word: " << pair.first << " is used " << pair.second << " times" << std::endl;
    }

    return 0;
}
