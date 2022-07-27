inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 8 }));
  set_short( "Passage - x27y26z8" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y27z8.c",
  "south" : DIR+"/rooms/x27y25z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
