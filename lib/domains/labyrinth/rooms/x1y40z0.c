inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 0 }));
  set_short( "Hallway - x1y40z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y40z0.c",
  "north" : DIR+"/rooms/x1y41z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
