inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 0, 3 }));
  set_short( "Corridor - x21y0z3" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y0z3.c",
  "east" : DIR+"/rooms/x22y0z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
