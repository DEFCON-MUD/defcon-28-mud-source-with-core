inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 2 }));
  set_short( "Corridor - x26y38z2" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z2.c",
  "east" : DIR+"/rooms/x27y38z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
