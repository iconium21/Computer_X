# Variables
CXX = x86_64-w64-mingw32-g++       # Compiler
CXXFLAGS = -static                 # Compiler flags (e.g., static linking)
SRCS = $(wildcard *.cpp)           # All .cpp files in the current directory
BUILDDIR = builds                  # Output directory
OBJS = $(patsubst %.cpp, $(BUILDDIR)/%.exe, $(SRCS)) # Map .cpp to builds/%.exe

# Default target
all: $(OBJS)

# Rule to compile .cpp files into .exe files
$(BUILDDIR)/%.exe: %.cpp
	@mkdir -p $(BUILDDIR)          # Create the builds directory if it doesn't exist
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean target to remove builds directory
clean:
	rm -rf $(BUILDDIR)
