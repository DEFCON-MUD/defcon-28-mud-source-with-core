inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 0, 6 }));
  set_short( "Hallway - x21y0z6" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y0z6.c",
  "east" : DIR+"/rooms/x22y0z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
