main: main.o box.o invert.o scale.o imageio.o 
	g++ -o main main.o box.o invert.o scale.o imageio.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp imageio.h

box.o: box.cpp imageio.h

scale.o: scale.cpp imageio.h


clean:
	rm -f sample.o imageio.o box.o invert.o main.o scale.o
