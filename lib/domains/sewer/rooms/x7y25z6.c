inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 25, 6 }));
  set_short( "Hallway - x7y25z6" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y26z6.c",
  "south" : DIR+"/rooms/x7y24z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
