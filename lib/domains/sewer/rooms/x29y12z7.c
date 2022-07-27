inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 7 }));
  set_short( "Corridor - x29y12z7" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y12z7.c",
  "north" : DIR+"/rooms/x29y13z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
