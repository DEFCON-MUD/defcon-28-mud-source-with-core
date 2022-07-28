inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 49, 1 }));
  set_short( "Corridor - x25y49z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y50z1.c",
  "south" : DIR+"/rooms/x25y48z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
