inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 27, 1 }));
  set_short( "Hallway - x9y27z1" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y28z1.c",
  "south" : DIR+"/rooms/x9y26z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
