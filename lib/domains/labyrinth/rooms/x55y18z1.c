inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 18, 1 }));
  set_short( "Hallway - x55y18z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y18z1.c",
  "north" : DIR+"/rooms/x55y19z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
