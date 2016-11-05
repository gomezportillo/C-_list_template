# -*- mode:make -*-

DIRSRC := src/
DIRHEA := include/
DIROBJ := obj/
DIREXE := exe/

CXX := g++
CXXFLAGS 	:= -I $(DIRHEA) -Wall
LDFLAGS 	:=

EXEC	:= $(DIREXE)main
OBJ		:= $(patsubst $(DIRSRC)%.cpp, $(DIROBJ)%.o, $(wildcard $(DIRSRC)*.cpp))

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
