all:
	@mkdir -vp bin
	$(CC) $(CFLAGS) -s src/owoify.c -o bin/owoify
clean:
	@rm -rvf bin