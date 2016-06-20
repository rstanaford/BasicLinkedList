CC=cc
CFLAGS=-Wall -g -std=gnu99

LIBS=
MYLIBS=

INCDIR=../inc
OBJDIR=../obj
BINDIR=../bin
TARGET=BasicLinked


_DEPS = linkedlist.h
DEPS = $(patsubst %,$(INCDIR)/%,$(_DEPS))


_OBJS = linkedlist.o basiclinked.o
OBJS = $(patsubst %,$(OBJDIR)/%,$(_OBJS))




$(OBJDIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

build: $(OBJS)
	$(CC) $(CFLAGS) -o $(BINDIR)/$(TARGET) $^ $(LIBS) $(MYLIBS)



.PHONY: clean

clean:
	rm -f $(BINDIR)/$(TARGET) $(OBJDIR)/*



