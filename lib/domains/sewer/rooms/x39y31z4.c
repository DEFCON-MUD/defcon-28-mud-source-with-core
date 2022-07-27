inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 31, 4 }));
  set_short( "Hallway - x39y31z4" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y32z4.c",
  "south" : DIR+"/rooms/x39y30z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
