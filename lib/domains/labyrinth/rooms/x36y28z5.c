inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 28, 5 }));
  set_short( "Hallway - x36y28z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y28z5.c",
  "east" : DIR+"/rooms/x37y28z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
