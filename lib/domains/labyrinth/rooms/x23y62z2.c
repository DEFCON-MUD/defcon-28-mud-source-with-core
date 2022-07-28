inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 2 }));
  set_short( "Corridor - x23y62z2" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y62z2.c",
  "east" : DIR+"/rooms/x24y62z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
