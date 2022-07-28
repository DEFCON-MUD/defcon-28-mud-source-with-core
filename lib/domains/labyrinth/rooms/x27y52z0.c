inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 0 }));
  set_short( "Corridor - x27y52z0" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y52z0.c",
  "east" : DIR+"/rooms/x28y52z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
