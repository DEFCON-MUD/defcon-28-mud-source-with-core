inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 33, 7 }));
  set_short( "Passage - x27y33z7" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y34z7.c",
  "south" : DIR+"/rooms/x27y32z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
