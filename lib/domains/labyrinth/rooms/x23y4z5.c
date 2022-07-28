inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 5 }));
  set_short( "Corridor - x23y4z5" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y4z5.c",
  "north" : DIR+"/rooms/x23y5z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
