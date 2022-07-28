inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 61, 8 }));
  set_short( "Corridor - x39y61z8" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y62z8.c",
  "south" : DIR+"/rooms/x39y60z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
