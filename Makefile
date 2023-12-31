all:		  bin/monedas		bin/mochila

bin/monedas:	  monedas.cpp
	mkdir	  -p	    bin
	g++	  -o	    bin/monedas	    monedas.cpp

monedas.o:	    monedas.cpp
	g++	    -c		monedas.cpp

bin/mochila:	    mochila.cpp
	mkdir	    -p		bin
	g++	    -o		bin/mochila	mochila.cpp

mochila.o:	     mochila.cpp
	g++	     -c		mochila.cpp

clean:
	rm	-r	*.o	*.gch	bin
