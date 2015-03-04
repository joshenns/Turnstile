CFLAGS = -I /usr/include -std=c++0x
LFLAGS = -L /usr/lib
LNFLAGS = -lcppunit -ldl
MAINOBJ = turnstile.o main.o
OBJECTS = turnstileTestFixture.o test.o
GXX = g++

main: $(MAINOBJ)
	${GXX} $(LFLAGS) -o $@ $^ $(LNFLAGS) 

test: $(OBJECTS)
	${GXX} $(LFLAGS) -o $@ $^ $(LNFLAGS) 

%.o : %.cc
	${GXX} $(CFLAGS) -c $^

clean:
	rm -f *.o main
