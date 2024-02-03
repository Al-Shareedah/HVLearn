CC=gcc
CFLAGS=-g -Wall
SHARE=-shared -fPIC

# Include path for GnuTLS
GNUTLS_INC=-I/usr/local/Cellar/gnutls/3.8.3/include

# Library path for GnuTLS
GNUTLS_LIB=-L/usr/local/Cellar/gnutls/3.8.3/lib -lgnutls


SSL_ROOT:=-I..


# Updated JDK paths
JDK=-I/Library/Java/JavaVirtualMachines/jdk-1.8.jdk/Contents/Home/include \
    -I/Library/Java/JavaVirtualMachines/jdk-1.8.jdk/Contents/Home/include/darwin/

all: server

server: serverJNI.c
	$(CC) $(CFLAGS) $(SHARE) $(JDK) $(SSL_ROOT) \
		serverJNI.c -o libserverJNI.so $(GNUTLS_LIB)


clean:
	rm -f libserverJNI.so
