inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 14, 2 }));
  set_short( "Corridor - x19y14z2" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y14z2.c",
  "east" : DIR+"/rooms/x20y14z2.c",
  "north" : DIR+"/rooms/x19y15z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
