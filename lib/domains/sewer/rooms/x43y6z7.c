inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 6, 7 }));
  set_short( "Hallway - x43y6z7" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y6z7.c",
  "north" : DIR+"/rooms/x43y7z7.c",
  "south" : DIR+"/rooms/x43y5z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
