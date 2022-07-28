inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 13, 0 }));
  set_short( "Corridor - x51y13z0" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y14z0.c",
  "south" : DIR+"/rooms/x51y12z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
