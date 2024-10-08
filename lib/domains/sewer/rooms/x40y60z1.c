inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 60, 1 }));
  set_short( "Hallway - x40y60z1" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y60z1.c",
  "east" : DIR+"/rooms/x41y60z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
