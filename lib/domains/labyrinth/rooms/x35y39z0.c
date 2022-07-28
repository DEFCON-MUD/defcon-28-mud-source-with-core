inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 39, 0 }));
  set_short( "Passage - x35y39z0" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y40z0.c",
  "south" : DIR+"/rooms/x35y38z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
