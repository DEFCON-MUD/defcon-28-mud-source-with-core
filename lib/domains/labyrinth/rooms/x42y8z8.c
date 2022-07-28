inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 8, 8 }));
  set_short( "Passage - x42y8z8" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y8z8.c",
  "east" : DIR+"/rooms/x43y8z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
