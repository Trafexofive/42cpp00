/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:38:38 by mlamkadm          #+#    #+#             */
/*   Updated: 2024/03/30 01:38:41 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
