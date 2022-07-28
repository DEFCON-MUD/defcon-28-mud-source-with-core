inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 2, 5 }));
  set_short( "Hallway - x57y2z5" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y2z5.c",
  "east" : DIR+"/rooms/x58y2z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
