inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 5 }));
  set_short( "Hallway - x51y12z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y12z5.c",
  "north" : DIR+"/rooms/x51y13z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
