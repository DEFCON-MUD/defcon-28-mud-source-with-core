inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 0 }));
  set_short( "Hallway - x29y6z0" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y6z0.c",
  "east" : DIR+"/rooms/x30y6z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
