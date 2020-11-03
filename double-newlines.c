#include <stdio.h>

int main( int argc, char **argv ){
	FILE *fp;
	int c;
	while( (c = fgetc( stdin )) != EOF ){
		putchar( c );
		if( c == '\n' )
			putchar( c );
	}
	return 0;
}
