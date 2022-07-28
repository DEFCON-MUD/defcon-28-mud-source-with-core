inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 1 }));
  set_short( "Hallway - x37y40z1" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y40z1.c",
  "north" : DIR+"/rooms/x37y41z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
