# -*- mode:make -*-

DIRSRC	:= src/
DIRHEA	:= include/
DIROBJ	:= obj/
DIREXE	:= exe/

CXX 		:= g++
CXXFLAGS:= -I $(DIRHEA) -Wall -std=gnu++11
LDFLAGS :=

EXCLUDE	:= $(DIRSRC)mainList.cpp $(DIRSRC)mainInheritance.cpp

EXEC		:= $(DIREXE)main
SRC			:= $(filter-out $(EXCLUDE), $(wildcard $(DIRSRC)*.cpp))
OBJ			:= $(patsubst $(DIRSRC)%.cpp, $(DIROBJ)%.o, $(SRC))

all: $(EXEC)

# Linking
$(EXEC): $(OBJ)
		$(CXX) $(LDFLAGS) $^ -o $@

# Compilation
$(DIROBJ)%.o: $(DIRSRC)%.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: exe clean

clean:
	$(RM) $(DIROBJ)* $(DIREXE)*

exe:
	$(EXEC)
