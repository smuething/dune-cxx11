CXX=g++
CXXFLAGS:= -std=c++0x -Wall $(CXXFLAGS)

REQUIRED=						\
	01-variadic					\
	02-rvalue-references				\
	03-static-assert				\
        04-nullptr					\
        05-nullptr_t					\
	06-variadic-constructor-sfinae			\
	07-conditional					\
	09-initializer_list				\
	10-initializer_list-stl				\
	11-array					\
	12-tuple					\
	13-shared_ptr					\
	14-make_shared					\
	15-allocate_shared				\
	16-shared_from_this				\
	17-unique_ptr					\
	18-decltype					\
	19-auto						\
	20-function-templates-default-template-args	\

TARGETS=						\
	$(REQUIRED)					\
	08-constexpr					\
	21-deleted-functions				\
	22-noexcept					\
	23-noexcept-expressions				\

all: $(TARGETS)

check: all
	./runtests $(TARGETS)

required: $(REQUIRED)

check-required: required
	./runtests $(REQUIRED)

clean:
	rm -f *.o $(TARGETS)
