inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 13, 7 }));
  set_short( "Hallway - x29y13z7" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y14z7.c",
  "south" : DIR+"/rooms/x29y12z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
