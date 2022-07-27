inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 0 }));
  set_short( "Corridor - x1y24z0" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y25z0.c",
  "south" : DIR+"/rooms/x1y23z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
