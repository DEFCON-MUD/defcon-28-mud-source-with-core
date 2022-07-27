inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 26, 4 }));
  set_short( "Corridor - x29y26z4" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y26z4.c",
  "north" : DIR+"/rooms/x29y27z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
