inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 4, 8 }));
  set_short( "Hallway - x15y4z8" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y4z8.c",
  "south" : DIR+"/rooms/x15y3z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
