CXX = g++
CXXFLAGS = -std=c++14 -Wall -MMD -g -c
EXEC = watopoly
OBJECTS = boardcell.o dice.o display.o gameboard.o gyms.o improvable.o nonOwnable.o ownable.o player.o res.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
