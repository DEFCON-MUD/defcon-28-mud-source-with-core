inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 27, 3 }));
  set_short( "Corridor - x11y27z3" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y28z3.c",
  "south" : DIR+"/rooms/x11y26z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
