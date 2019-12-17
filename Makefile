OBJS_SRC = $(wildcard Engine/Core/Timer/*.c) \
		   $(wildcard Engine/Core/Window/*.c) \
		   $(wildcard Engine/*.c)

OBJS=$(OBJS_SRC:.c=.o)

LDFLAGS = -lSDL2

NAE_Engine: $(OBJS) 
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm $(OBJS) $(EXEC_NAME)