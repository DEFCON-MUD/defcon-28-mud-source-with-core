inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 14, 8 }));
  set_short( "Hallway - x23y14z8" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y14z8.c",
  "south" : DIR+"/rooms/x23y13z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
