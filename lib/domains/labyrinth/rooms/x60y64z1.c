inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 1 }));
  set_short( "Hallway - x60y64z1" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z1.c",
  "east" : DIR+"/rooms/x61y64z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
