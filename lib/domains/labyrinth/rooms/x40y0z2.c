inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 0, 2 }));
  set_short( "Corridor - x40y0z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y0z2.c",
  "east" : DIR+"/rooms/x41y0z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
