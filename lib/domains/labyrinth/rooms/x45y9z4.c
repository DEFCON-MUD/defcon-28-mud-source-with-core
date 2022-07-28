inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 9, 4 }));
  set_short( "Corridor - x45y9z4" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y10z4.c",
  "south" : DIR+"/rooms/x45y8z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
