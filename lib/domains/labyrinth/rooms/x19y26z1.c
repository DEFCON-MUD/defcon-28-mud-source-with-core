inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 1 }));
  set_short( "Hallway - x19y26z1" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y26z1.c",
  "south" : DIR+"/rooms/x19y25z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
