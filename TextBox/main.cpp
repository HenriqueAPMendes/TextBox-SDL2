/* ============================================================================ */
//
// Author: Henrique A. p. Mendes 
// github: https://github.com/HenriqueAPMendes
// linkedin: https://www.linkedin.com/in/henrique-mendes-508156215/
//
// A simple SDL2 textBox for dealing with user text input 
//
/* ============================================================================ */


// Example on how to Use Textbox

#include "Textbox.h"

int main(int argc,char* argv[]){

	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();

	TextBox textBox;
	textBox.setFontToHeight("font.ttf");
	//textBox.setBackground("background.png");
	textBox.run("message1");

	std::cout << textBox.getInput() << std::endl;

	TTF_Quit();
	SDL_Quit();
	return 0;
}
