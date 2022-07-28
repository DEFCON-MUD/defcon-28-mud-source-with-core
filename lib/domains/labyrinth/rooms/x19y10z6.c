inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 10, 6 }));
  set_short( "Hallway - x19y10z6" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y10z6.c",
  "north" : DIR+"/rooms/x19y11z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
