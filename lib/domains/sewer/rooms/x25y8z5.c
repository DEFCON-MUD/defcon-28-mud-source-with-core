inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 5 }));
  set_short( "Hallway - x25y8z5" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y8z5.c",
  "north" : DIR+"/rooms/x25y9z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
