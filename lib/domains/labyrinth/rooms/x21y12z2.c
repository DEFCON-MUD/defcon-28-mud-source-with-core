inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 2 }));
  set_short( "Hallway - x21y12z2" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z2.c",
  "south" : DIR+"/rooms/x21y11z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
