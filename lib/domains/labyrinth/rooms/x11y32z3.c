inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 3 }));
  set_short( "Hallway - x11y32z3" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y33z3.c",
  "south" : DIR+"/rooms/x11y31z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
