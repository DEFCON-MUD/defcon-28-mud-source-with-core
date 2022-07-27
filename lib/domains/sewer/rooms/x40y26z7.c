inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 26, 7 }));
  set_short( "Hallway - x40y26z7" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y26z7.c",
  "east" : DIR+"/rooms/x41y26z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
