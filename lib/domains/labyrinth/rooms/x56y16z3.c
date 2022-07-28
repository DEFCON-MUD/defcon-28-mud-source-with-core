inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 16, 3 }));
  set_short( "Passage - x56y16z3" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y16z3.c",
  "east" : DIR+"/rooms/x57y16z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
