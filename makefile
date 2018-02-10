hw03: main.o money.o hotdogstand.o nonmember.o
	g++ -Wall -o hw03 main.o money.o hotdogstand.o nonmember.o

main.o: main.cpp
	g++ -Wall -c main.cpp

money.o: money.cpp money.hpp
	g++ -Wall -c money.cpp

hotdogstand.o: hotdogstand.cpp hotdogstand.hpp
	g++ -Wall -c hotdogstand.cpp

nonmember.o: nonmember.cpp nonmember.hpp
	g++ -Wall -c nonmember.cpp

clean:
	rm -f core hw03
