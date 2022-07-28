inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 18, 1 }));
  set_short( "Corridor - x27y18z1" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y18z1.c",
  "south" : DIR+"/rooms/x27y17z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
