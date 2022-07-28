inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 62, 5 }));
  set_short( "Passage - x7y62z5" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y62z5.c",
  "east" : DIR+"/rooms/x8y62z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
