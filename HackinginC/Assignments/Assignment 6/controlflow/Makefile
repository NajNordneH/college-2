CFLAGS=-g -fno-stack-protector -fno-omit-frame-pointer

FILES=controlflow controlflowcrash controlflowmanipulate

all :
	for i in $(FILES); do \
			gcc $(CFLAGS) $$i.c -o $$i ; \
		done 
.PHONY : clean
clean : 
	-rm $(FILES)
