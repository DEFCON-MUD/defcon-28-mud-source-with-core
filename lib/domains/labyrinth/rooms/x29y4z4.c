inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 4, 4 }));
  set_short( "Passage - x29y4z4" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y4z4.c",
  "east" : DIR+"/rooms/x30y4z4.c",
  "north" : DIR+"/rooms/x29y5z4.c",
  "south" : DIR+"/rooms/x29y3z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
