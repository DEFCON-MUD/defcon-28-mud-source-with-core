inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 1 }));
  set_short( "Hallway - x59y18z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y18z1.c",
  "north" : DIR+"/rooms/x59y19z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
