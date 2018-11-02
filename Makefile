# Declaration of variables
CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := bin/World_Gen
TESTS := test

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g  -Wall
LIB := -lpthread
INC := -I include

LIBGTEST := /usr/lib/libgtest_main.a /usr/lib/libgtest.a
GTEST := tests/googletest/include
TESTS := tests/src

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)

# Tests
$(TEST): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) -I $(GTEST) $(TESTS)/*.cpp $(LIBGTEST) $(LIBS)./$(TEST)
