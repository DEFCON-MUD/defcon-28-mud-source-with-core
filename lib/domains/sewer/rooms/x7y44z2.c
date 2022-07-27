inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 2 }));
  set_short( "Corridor - x7y44z2" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y44z2.c",
  "north" : DIR+"/rooms/x7y45z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
