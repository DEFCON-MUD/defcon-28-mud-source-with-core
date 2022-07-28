inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 4 }));
  set_short( "Hallway - x44y0z4" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z4.c",
  "east" : DIR+"/rooms/x45y0z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
