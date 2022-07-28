inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 37, 6 }));
  set_short( "Passage - x39y37z6" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y38z6.c",
  "south" : DIR+"/rooms/x39y36z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
