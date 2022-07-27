inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 7 }));
  set_short( "Hallway - x31y60z7" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y61z7.c",
  "south" : DIR+"/rooms/x31y59z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
