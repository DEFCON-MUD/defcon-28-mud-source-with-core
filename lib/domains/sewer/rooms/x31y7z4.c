inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 7, 4 }));
  set_short( "Passage - x31y7z4" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y8z4.c",
  "south" : DIR+"/rooms/x31y6z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
