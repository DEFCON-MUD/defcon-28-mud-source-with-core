inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 0 }));
  set_short( "Hallway - x45y8z0" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y8z0.c",
  "north" : DIR+"/rooms/x45y9z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
