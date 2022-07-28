inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 5 }));
  set_short( "Corridor - x51y36z5" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y36z5.c",
  "south" : DIR+"/rooms/x51y35z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
