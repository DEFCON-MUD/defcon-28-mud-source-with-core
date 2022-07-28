inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 27, 9 }));
  set_short( "Corridor - x25y27z9" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y28z9.c",
  "south" : DIR+"/rooms/x25y26z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
