ALL: main

all: $(ALL)

main: funcao1.o funcao2.o funcao3.o etapa_1.o
	gcc -o $@ $^ -lm

%.o: %.c 
	gcc -c $<

clean: 
	rm -f *.s *.o output erro

distclean: clean
	rm -f $(ALL)
	
