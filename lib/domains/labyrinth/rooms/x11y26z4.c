inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 26, 4 }));
  set_short( "Hallway - x11y26z4" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y26z4.c",
  "east" : DIR+"/rooms/x12y26z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
