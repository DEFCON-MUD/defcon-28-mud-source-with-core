inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 52, 4 }));
  set_short( "Passage - x41y52z4" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y52z4.c",
  "north" : DIR+"/rooms/x41y53z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
