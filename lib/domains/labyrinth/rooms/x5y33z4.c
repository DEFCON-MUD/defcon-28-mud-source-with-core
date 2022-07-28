inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 33, 4 }));
  set_short( "Corridor - x5y33z4" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y34z4.c",
  "south" : DIR+"/rooms/x5y32z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
