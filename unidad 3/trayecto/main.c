#include <stdio.h>
#include "PERSONAJE.h"
#include "arma.h"
#include "Guerrero.h"
#include "Mago.h"

int main(void)
{
	Personaje* sam;
	sam = Personaje_crear("sam", 1, 5);

	printf("el nombre del personaje %s\n", get_name(sam));

	Personaje_destruir(sam);

	Arma* florete;
	florete = Arma_crear("platano", 8, 4);

	printf("arma es %s\n", get_wepon(platano));

	Arma_destruir(platano);

	Guerrero* Zoro;
	carlos = Guerrero_crear("cobra", 10, 2, 2);
	
	Mago* Pepe;
	maluma = Mago_crear("pepe", 15, 5, 33);
	
}