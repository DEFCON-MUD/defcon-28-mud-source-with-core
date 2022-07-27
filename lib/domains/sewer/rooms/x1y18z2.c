inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 2 }));
  set_short( "Passage - x1y18z2" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "south" : DIR+"/rooms/x1y17z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
