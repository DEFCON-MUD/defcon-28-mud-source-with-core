inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 2 }));
  set_short( "Passage - x3y40z2" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y40z2.c",
  "east" : DIR+"/rooms/x4y40z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
