/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 00:50:00 by mlamkadm          #+#    #+#             */
/*   Updated: 2024/03/30 00:50:03 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void PhoneBook::usage(void) {
  std::cout << CYAN "|==============Crappy Phone Usage==============\n\n";
  std::cout << "| Save a contact using the ADD cmd.\n";
  std::cout << "| Search for a contact using the SEARCH cmd.\n";
  std::cout << "| Exiting the program using the EXIT cmd.\n" << std::endl;
  std::cout << "|===============================================" RESET
            << std::endl;
}

void PhoneBook::init_search() {

  print_book();
  std::string temp = "";
  int index;
  while (1) {
    std::cout << "Please enter the contacts index :" << std::flush;
    std::getline(std::cin, temp);
    if (std::cin.eof()) {
      return;
    }
    if (std::cin.good() && !temp.empty()) {
      std::istringstream num(temp);
      if (!(num >> index)) {
        std::cout << RED "invalid index." RESET << std::endl;
        continue;
      } else if (index != -1) {
        std::cin.clear();
        search(index);
        return;
      }
    } else {
      std::cin.clear();
      continue;
    }
  }
}

void PhoneBook::add(void) {

  if (index >= 8) {
    index = 0;
    std::cout << RED "No more room left : "
              << RED "replacing oldest contact." RESET;
  }

  contact[index].append();
  if (std::cin.eof())
    return;
  index += 1;
}

void PhoneBook::search(int index) {
  if (index > 7) {
    std::cout << RED "index out of range." RESET << std::endl;
    return;
  } else if (contact[index].is_empty() == false)
    contact[index].print_contact();
  else {
    std::cout << RED "Empty Contact." RESET << std::endl;
    return;
  };
}

void PhoneBook::print_upper_row(void) {
  std::cout << "|----------|----------|----------|----------|" << std::endl;
  std::cout << "|" << std::setw(10) << "index";
  std::cout << "|" << std::setw(10) << "first name";
  std::cout << "|" << std::setw(10) << "last name";
  std::cout << "|" << std::setw(10) << "nick name"
            << "|" << std::endl;
  std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::print_book(void) {
  int i = 0;

  print_upper_row();
  while (i < 8) {
    if (this->contact[i].is_empty() == false)
      this->contact[i].print_table(i);
    i++;
  }
}
