inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 25, 2 }));
  set_short( "Passage - x57y25z2" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y26z2.c",
  "south" : DIR+"/rooms/x57y24z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
