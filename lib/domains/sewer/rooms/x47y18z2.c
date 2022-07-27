inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 18, 2 }));
  set_short( "Corridor - x47y18z2" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y18z2.c",
  "east" : DIR+"/rooms/x48y18z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
