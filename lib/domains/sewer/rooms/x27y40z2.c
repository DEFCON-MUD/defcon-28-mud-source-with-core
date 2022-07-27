inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 40, 2 }));
  set_short( "Hallway - x27y40z2" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y40z2.c",
  "north" : DIR+"/rooms/x27y41z2.c",
  "south" : DIR+"/rooms/x27y39z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
