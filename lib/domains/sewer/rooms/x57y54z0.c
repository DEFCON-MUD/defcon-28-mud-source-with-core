inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 0 }));
  set_short( "Hallway - x57y54z0" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y54z0.c",
  "south" : DIR+"/rooms/x57y53z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
