inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 27, 1 }));
  set_short( "Hallway - x55y27z1" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y28z1.c",
  "south" : DIR+"/rooms/x55y26z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
