inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 27, 0 }));
  set_short( "Corridor - x23y27z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y28z0.c",
  "south" : DIR+"/rooms/x23y26z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
