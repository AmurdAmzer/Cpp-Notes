#*****************************************************
# Makefile
#CFLAGS = -Wall -g -Wunused-variable
#*****************************************************
CC = g++
CFLAGS = -g -std=c++11 -Wall
main = pyramid
#****************************************************
# Targets needed to bring the executable up to date
 
$(main).exe: $(main).o
	$(CC) -o $(main).exe $(main).o
 
$(main).o: $(main).cpp
	$(CC) $(CFLAGS) -c $(main).cpp
  
clean:
	rm *.o
	rm *~

clobber:
	rm *.exe
	rm *.o
	rm *~
