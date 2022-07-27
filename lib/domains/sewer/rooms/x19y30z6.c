inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 30, 6 }));
  set_short( "Hallway - x19y30z6" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y30z6.c",
  "south" : DIR+"/rooms/x19y29z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
