inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 62, 9 }));
  set_short( "Hallway - x20y62z9" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y62z9.c",
  "east" : DIR+"/rooms/x21y62z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
