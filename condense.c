#include <stdio.h>
#include <stdbool.h>

int main( int argc, char **argv ){
	bool in_quote;
	int c;
	in_quote = false;
	while( (c = fgetc( stdin )) != EOF ){
		if( c == '\n' && in_quote ){
			putchar( '\\' );
			putchar( 'n' );
		}
		else{
			if( c == '"' )
				in_quote = !in_quote;
			putchar( c );
		}
	}
	return 0;
}
