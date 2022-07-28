inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 0, 2 }));
  set_short( "Passage - x14y0z2" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y0z2.c",
  "east" : DIR+"/rooms/x15y0z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
