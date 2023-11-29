target=main
object=main.o util.o
CC=g++
$(target):$(object)
	$(CC) -o $(target) $(object)
%.o:%.cpp
	$(CC) -c $^ -I ./include

.PHONY:clean
clean:
	rm $(target) $(object)
