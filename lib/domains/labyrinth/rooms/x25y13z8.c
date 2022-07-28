inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 13, 8 }));
  set_short( "Corridor - x25y13z8" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y14z8.c",
  "south" : DIR+"/rooms/x25y12z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
