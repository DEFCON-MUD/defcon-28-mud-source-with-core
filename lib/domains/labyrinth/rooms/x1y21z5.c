inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 21, 5 }));
  set_short( "Corridor - x1y21z5" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y22z5.c",
  "south" : DIR+"/rooms/x1y20z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
