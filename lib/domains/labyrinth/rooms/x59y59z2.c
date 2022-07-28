inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 59, 2 }));
  set_short( "Corridor - x59y59z2" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y60z2.c",
  "south" : DIR+"/rooms/x59y58z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
