inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 5 }));
  set_short( "Passage - x16y0z5" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z5.c",
  "east" : DIR+"/rooms/x17y0z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
