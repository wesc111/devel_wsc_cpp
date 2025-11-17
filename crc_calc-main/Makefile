# --------------------------------------------------------------------------------
# makefile to run CPP
# WSC, 25-Oct-2022
# --------------------------------------------------------------------------------

# definition of the cpp moduloe files
CPP_FILES = crcCalculator crcConsole
# definition of the header files
HEADER_FILES = crcCalculator
INC_DIR = ./SRC 
INC_DIR_BOOST = /opt/homebrew/Cellar/boost/1.87.0/include/boost
BOOST_LIB = /opt/homebrew/Cellar/boost/1.87.0/lib
PRG_NAME = crcCalc

TEST_DATA = 0x3132 0x3334 0x3536 0x3738

OBJ_FILES = $(addsuffix .o, $(CPP_FILES))
HEADER_FILES_1 = $(addprefix ./src/, $(HEADER_FILES))
HEADER_FILES = $(addsuffix .h, $(HEADER_FILES_1))

echo:
	@echo "help: makefile to run cpp"
	@echo "> make compile     ... compile all files"
	@echo "> make run         ... compile all files and run program"
	@echo "> make clean       ... remove all .o files"
	@echo "> make clean_all   ... remove generated executable"

# compile rule for modules
%.o: SRC/%.cpp
	g++ -I$(INC_DIR) -c $<

# linking everything together
compile: $(OBJ_FILES) $(HEADER_FILES_2)
	g++ -L $(BOOST_LIB)  -o $(PRG_NAME) $(OBJ_FILES)

# start the executable
run: compile
	./$(PRG_NAME) $(TEST_DATA)

clean:
	-rm *.o

clean_all: clean
	-rm $(PRG_NAME)