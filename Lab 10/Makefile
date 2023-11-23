#*****************************************************
# Makefile
#CFLAGS = -Wall -g -Wunused-variable
#*****************************************************
CC = g++
CFLAGS = -g -DDEBUG -std=c++11 -Wall
#header= $(main).h
header=
main = movie_st1
#****************************************************
# Targets needed to bring the executable up to date
 
$(main).exe: $(main).o
	$(CC) -o $(main).exe $(main).o
 
$(main).o: $(main).cpp $(header)
	$(CC) $(CFLAGS) -c $(main).cpp
 
  
clean:
	rm *.o
	rm *~
