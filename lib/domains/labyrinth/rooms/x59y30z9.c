inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 30, 9 }));
  set_short( "Corridor - x59y30z9" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y30z9.c",
  "east" : DIR+"/rooms/x60y30z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
