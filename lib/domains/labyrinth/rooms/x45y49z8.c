inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 49, 8 }));
  set_short( "Hallway - x45y49z8" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y50z8.c",
  "south" : DIR+"/rooms/x45y48z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
