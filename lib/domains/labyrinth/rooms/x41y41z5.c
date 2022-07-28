inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 41, 5 }));
  set_short( "Passage - x41y41z5" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y42z5.c",
  "south" : DIR+"/rooms/x41y40z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
