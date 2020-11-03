#include <stdio.h>

int main( int argc, char **argv ){
	int c;
	while( (c = fgetc( stdin )) != EOF ){
		if( c == '\n' ) putchar( '\r' );
		putchar( c );
	}
	return 0;
}
