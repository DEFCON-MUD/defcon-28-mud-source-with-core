inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 1 }));
  set_short( "Hallway - x37y14z1" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y14z1.c",
  "south" : DIR+"/rooms/x37y13z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
