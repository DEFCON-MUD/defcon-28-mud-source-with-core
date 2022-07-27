inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 2 }));
  set_short( "Hallway - x29y27z2" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z2.c",
  "south" : DIR+"/rooms/x29y26z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
