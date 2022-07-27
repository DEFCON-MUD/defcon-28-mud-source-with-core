inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 57, 5 }));
  set_short( "Hallway - x19y57z5" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y58z5.c",
  "south" : DIR+"/rooms/x19y56z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
