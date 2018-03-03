client: client.o mystack.o
	$(CC) $(CFLAGS) -o client client.o mystack.o

client.o: client.c mystack.h
	$(CC) $(CFLAGS) -c client.c

mystack.o: mystack.c mystack.h
	$(CC) $(CFLAGS) -c mystack.c

