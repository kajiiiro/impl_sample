TARGET   = impl
SRC      = main.cpp impl.cpp
OBJ      = impl.o main.o

CXXFLAGS = -Wall -std=c++0x

all:${TARGET}

${TARGET}:${OBJ}
	${CXX} ${CXXFLAGS} -o $@ $^

${OBJ}:${SRC}
	${CXX} -c ${CXXFLAGS} $^

clean:
	${RM} *.o ${TARGET}

