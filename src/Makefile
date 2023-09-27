
OBJS = userInterface.o

CFLAGS = -g -O3

all: tokenizer

tokenizer: $(OBJS)
	cc -o tokenizer $(CFLAGS) $(OBJS)

clean:
	rm -f *.o tokenizer

run:tokenizer
	./tokenizer
