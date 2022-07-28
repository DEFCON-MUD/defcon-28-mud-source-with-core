inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 60, 2 }));
  set_short( "Passage - x42y60z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y60z2.c",
  "east" : DIR+"/rooms/x43y60z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
