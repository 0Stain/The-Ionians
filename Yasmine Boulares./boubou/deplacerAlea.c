#include "fichier.h"

 void deplacement_aleatoire(ENTITE_SECONDAIRE *e,int min,int max)
{       
	 
               
               if (e->position.x >= max )
		e->direction = 0;
		
	if ( e->position.x <= min )
		e->direction = 1;
		
	if ( e->direction == 1)
		e->position.x += 10;
	if (e->direction == 0)
		e->position.x -= 10;
               	
   if (e->position.y >= max )
		e->direction = 0;
		
	if ( e->position.y <= min )
		e->direction = 1;
		
	if ( e->direction == 1)
		e->position.y += 40;
	if (e->direction == 0)
		e->position.y -= 15;
} 
