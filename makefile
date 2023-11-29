target=main
object=main.o util.o human.o
CC=g++
$(target):$(object)
	$(CC) -o $(target) $(object)
%.o:%.cpp
	$(CC) -c $^ -I ./include

.PHONY:clean
clean:
	rm -rf $(target) $(object) 
