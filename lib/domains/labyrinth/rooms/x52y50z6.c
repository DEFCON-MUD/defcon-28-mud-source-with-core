inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 50, 6 }));
  set_short( "Corridor - x52y50z6" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y50z6.c",
  "east" : DIR+"/rooms/x53y50z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
