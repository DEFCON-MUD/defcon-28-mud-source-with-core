inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 8 }));
  set_short( "Passage - x60y64z8" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z8.c",
  "east" : DIR+"/rooms/x61y64z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
