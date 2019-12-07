#include "lib/sample.h"

namespace template_repository {

bool pathfinder(const std::string a) {
  std::ifstream file_stream;
  file_stream.open(a);

  if (!file_stream.is_open()) {
    return false;
  } else {
    return true;
  }
}

bool words_checker(std::map<std::string, size_t> b) {
  if (b.size() > 0) {
    return true;
  } else {
    return false;
  }
}

}  // namespace qwerty
