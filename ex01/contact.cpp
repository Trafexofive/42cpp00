/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 00:50:07 by mlamkadm          #+#    #+#             */
/*   Updated: 2024/03/30 00:50:08 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::print_table(int index) {

  std::cout << "|" << std::setw(10) << index;
  std::cout << "|" << std::setw(10) << this->add_dot(this->first_name);
  std::cout << "|" << std::setw(10) << this->add_dot(this->last_name);
  std::cout << "|" << std::setw(10) << this->add_dot(this->nick_name) << "|"
            << std::endl;
  std::cout << "|----------|----------|----------|----------|" << std::endl;
}

std::string Contact::add_dot(std::string str) {
  if (str.length() >= 9)
    return (str.substr(0, 9) + ".");
  else
    return str;
}

void Contact::print_contact(void) {
  std::cout << "First name: " << this->first_name << std::endl;
  std::cout << "Last name: " << this->last_name << std::endl;
  std::cout << "Nick name: " << this->nick_name << std::endl;
  std::cout << "Phone number: " << this->phone_number << std::endl;
  std::cout << "Darkest Secret: " << this->secret << std::endl;
}

void Contact::append(void) {
  int i = 0;
  std::string prompt;
  std::string question[5] = {" first name : ", " last name : ", " nickname : ",
                             " phone number : ", " darkest secret : "};
  while (true) {
    std::cout << "Insert" + question[i] << std::flush;
    std::getline(std::cin, prompt);
    if (std::cin.eof()) {
      return;
    }
    if (check_wc(prompt)) {
      std::cout << RED "Invalid Prompt : input again." RESET << std::endl;
      continue;
    } else {
      if (i == 0)
        first_name = prompt;
      else if (i == 1)
        last_name = prompt;
      else if (i == 2)
        nick_name = prompt;
      else if (i == 3)
        phone_number = prompt;
      else if (i == 4) {
        secret = prompt;
        break;
      }
      std::cin.clear();

      i++;
    }
  }
}

bool Contact::check_wc(const std::string &prompt) {
  for (int i = 0; prompt[i]; i++) {
    if (!std::isspace(prompt[i]))
      return false;
  }
  return true;
}
bool Contact::is_empty(void) {
  if (first_name.empty())
    return true;
  if (nick_name.empty())
    return true;
  if (last_name.empty())
    return true;
  if (phone_number.empty())
    return true;
  if (secret.empty())
    return true;
  return false;
}
