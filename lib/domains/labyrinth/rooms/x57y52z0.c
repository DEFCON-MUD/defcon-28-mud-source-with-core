inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 52, 0 }));
  set_short( "Passage - x57y52z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y53z0.c",
  "south" : DIR+"/rooms/x57y51z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
