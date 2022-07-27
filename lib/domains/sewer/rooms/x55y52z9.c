inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 9 }));
  set_short( "Hallway - x55y52z9" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y52z9.c",
  "north" : DIR+"/rooms/x55y53z9.c",
  "south" : DIR+"/rooms/x55y51z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
