inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 7 }));
  set_short( "Corridor - x60y64z7" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z7.c",
  "east" : DIR+"/rooms/x61y64z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
