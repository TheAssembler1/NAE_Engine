OBJS_SRC = $(wildcard Engine/Core/Timer/*.c) \
		   $(wildcard Engine/Core/Window/*.c) \
		   $(wildcard Engine/*.c)

OBJS = $(OBJS_SRC:.c=.o)

LDFLAGS = -lSDL2

NAE_Engine: $(OBJS) 
	cc -o $@ $^ $(LDFLAGS)

clean:
	rm $(OBJS) NAE_Engine
