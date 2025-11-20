cc := clang
cflags := -std=c11 -Wall -Wextra -pedantic -g3
ldflags := -lm
srcs := $(wildcard src/*.c)
builddir := build
objs := $(srcs:src/%.c=$(builddir)/%.o)
bins := $(srcs:src/%.c=$(builddir)/%)

.PHONY: all clean

all: $(bins)

$(builddir)/%: $(builddir)/%.o | $(builddir)
	$(cc) $< -o $@ $(ldflags)

$(builddir)/%.o: src/%.c | $(builddir)
	$(cc) $(cflags) -c $< -o $@

$(builddir):
	mkdir -p $@

clean:
	rm -rf $(builddir)
