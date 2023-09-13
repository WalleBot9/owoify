ifeq ($(PREFIX),)
    PREFIX := /usr/local
endif
all:
	@mkdir -vp bin
	$(CC) $(CFLAGS) -s src/owoify.c -o bin/owoify
clean:
	@rm -rvf bin
install:
	install -m 644 bin/owoify $(DESTDIR)$(PREFIX)/bin/owoify
uninstall:
	@rm -vf bin/owoify $(DESTDIR)$(PREFIX)/bin/owoify
