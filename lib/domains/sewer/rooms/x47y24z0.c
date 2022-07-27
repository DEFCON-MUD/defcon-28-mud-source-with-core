inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 0 }));
  set_short( "Corridor - x47y24z0" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y25z0.c",
  "south" : DIR+"/rooms/x47y23z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
