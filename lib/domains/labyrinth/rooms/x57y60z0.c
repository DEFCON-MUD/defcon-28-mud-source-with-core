inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 0 }));
  set_short( "Corridor - x57y60z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y60z0.c",
  "north" : DIR+"/rooms/x57y61z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
