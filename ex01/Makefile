
EXE := phonebook

CPP := c++ -std=c++98

CPPFLAGS := -Wall -Wextra -Werror

HEADER := PhoneBook.hpp Contact.hpp \

SRC := main \
	   Contact \
	   PhoneBook \

FILES := $(SRC:=.cpp)

OBJ := $(FILES:.cpp=.o)

RM := rm -rf

################################################################################

all : $(EXE)

$(EXE) : $(OBJ)
	$(CPP) $(OBJ) -o $(EXE) 

%.o : %.cpp $(HEADER)
	$(CPP) $(CPPFLAGS) -c -o $@ $<

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(EXE)

re : fclean all

git : fclean
	sh ../../push.sh

################################################################################

.PHONY : clean fclean re git
