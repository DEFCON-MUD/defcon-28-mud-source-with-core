inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 41, 1 }));
  set_short( "Hallway - x33y41z1" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y42z1.c",
  "south" : DIR+"/rooms/x33y40z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
