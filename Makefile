ifeq ($(PREFIX),)
    PREFIX := /usr/local
endif
all:
	@mkdir -vp bin
	$(CC) $(CFLAGS) -s src/owoify.c -o bin/owoify
clean:
	@rm -rvf bin
install:
	@install -v bin/owoify $(DESTDIR)$(PREFIX)/bin/owoify
uninstall:
	@rm -vf $(DESTDIR)$(PREFIX)/bin/owoify
