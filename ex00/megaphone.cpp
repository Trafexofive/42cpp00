
#include <cctype>
#include <iostream>

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  } else {
    for (int i = 1; i < argc; i++) {
      for (char *p = argv[i]; *p != '\0'; p++) {
        std::cout << (char)toupper(*p);
      }
      if (i < argc - 1) {
        std::cout << ' ';
      }
    }
  }
  std::cout << std::endl;
  return 0;
}
