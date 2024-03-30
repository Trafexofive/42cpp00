/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 00:50:34 by mlamkadm          #+#    #+#             */
/*   Updated: 2024/03/30 00:50:36 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void) {

  PhoneBook book;
  std::string prompt;
  book.usage();

  while (true) {
    std::cout << "=>" << std::flush;
    std::getline(std::cin, prompt);
    if (prompt == "ADD")
      book.add();
    else if (prompt == "SEARCH")
      book.init_search();
    else if (std::cin.eof() || prompt == "EXIT") {
      std::cout << "Exiting ..." << std::endl;
      break;
    }
  }

  return 0;
}
