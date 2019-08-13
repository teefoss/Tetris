CC      = clang
EXEC    = tetris
CFLAGS  = -Wall -g
LIBS	= -lSDL2 -lSDL_mixer -lSDL_image
LDFLAGS = -L/usr/local/include/SDL2

OBJS = tetris.c tetramino.c

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC) $(LDFLAGS) $(LIBS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean
clean:
	@rm -f *.o $(EXEC)
