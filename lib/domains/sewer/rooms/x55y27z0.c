inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 27, 0 }));
  set_short( "Hallway - x55y27z0" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y28z0.c",
  "south" : DIR+"/rooms/x55y26z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
