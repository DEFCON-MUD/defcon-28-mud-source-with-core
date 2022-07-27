inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 15, 0 }));
  set_short( "Corridor - x21y15z0" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y16z0.c",
  "south" : DIR+"/rooms/x21y14z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
