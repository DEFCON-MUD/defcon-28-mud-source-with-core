inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 9 }));
  set_short( "Hallway - x23y62z9" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y62z9.c",
  "east" : DIR+"/rooms/x24y62z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
