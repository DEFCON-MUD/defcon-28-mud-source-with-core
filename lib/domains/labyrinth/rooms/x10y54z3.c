inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 54, 3 }));
  set_short( "Corridor - x10y54z3" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y54z3.c",
  "east" : DIR+"/rooms/x11y54z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
