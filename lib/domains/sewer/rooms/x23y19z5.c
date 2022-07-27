inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 19, 5 }));
  set_short( "Hallway - x23y19z5" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y20z5.c",
  "south" : DIR+"/rooms/x23y18z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
