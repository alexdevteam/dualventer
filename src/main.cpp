#include "bot.hpp"
#include <iostream>
#include <fstream>

int main() {
  std::ifstream f("token");
  char buf[256];
  f.getline(buf, 256, '\n');

  dualventer::Bot bot(buf, fs::path("modules"));
  bot.run();
  std::cin.get();

  return 0;
}
