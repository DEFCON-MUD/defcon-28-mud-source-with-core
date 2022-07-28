inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 8 }));
  set_short( "Passage - x37y20z8" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y20z8.c",
  "south" : DIR+"/rooms/x37y19z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
