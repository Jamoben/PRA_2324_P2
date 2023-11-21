bin/monedas:	  monedas.cpp
	      mkdir	  -p	    bin
	      g++	    -o	    bin/monedas	    monedas.cpp

monedas.o:	    monedas.cpp
	    g++	      -c	monedas.cpp
