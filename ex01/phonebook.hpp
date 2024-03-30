/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 00:50:15 by mlamkadm          #+#    #+#             */
/*   Updated: 2024/03/30 00:50:18 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP__
#define PHONEBOOK_HPP__

#include "contact.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <iomanip>
#include <iostream>

class PhoneBook {
private:
  Contact contact[8];
  int index;

public:
  PhoneBook(void) : index(0){};
  void usage(void);
  void init_search(void);
  void print_upper_row(void);
  void search(int index);
  void add(void);
  void print_book(void);
};

#endif
