inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 30, 7 }));
  set_short( "Corridor - x33y30z7" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y30z7.c",
  "east" : DIR+"/rooms/x34y30z7.c",
  "north" : DIR+"/rooms/x33y31z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
