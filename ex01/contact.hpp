/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 00:50:12 by mlamkadm          #+#    #+#             */
/*   Updated: 2024/03/30 00:50:13 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP__
#define CONTACT_HPP__

#include <iomanip>
#include <iostream>
#include <string>

#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

class Contact {
private:
  std::string phone_number;
  std::string secret;
  std::string first_name;
  std::string last_name;
  std::string nick_name;

public:
  void print_contact(void);
  void print_table(int index);
  bool is_empty(void);
  bool check_wc(const std::string &prompt);
  void clear(void);
  std::string add_dot(std::string);
  void append();
};

#endif
