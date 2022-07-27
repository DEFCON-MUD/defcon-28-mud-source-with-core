inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 4, 6 }));
  set_short( "Hallway - x31y4z6" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y5z6.c",
  "south" : DIR+"/rooms/x31y3z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
