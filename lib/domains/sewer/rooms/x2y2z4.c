inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 2, 4 }));
  set_short( "Hallway - x2y2z4" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y2z4.c",
  "east" : DIR+"/rooms/x3y2z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
