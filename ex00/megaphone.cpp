
#include <iostream>

int main(int argc, char **argv) {

  std::string str;
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  } else {
    for (int i = 1; argv[i]; i++) {
      str += argv[i];
      str += " ";
    }
    for (int i = 0; str[i]; i++) {
      std::cout << (char)std::toupper(str[i]) << std::flush;
    }
  }
  std::cout << std::endl;
  return 0;
}
