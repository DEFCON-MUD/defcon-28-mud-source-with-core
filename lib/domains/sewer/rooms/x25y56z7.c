inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 56, 7 }));
  set_short( "Passage - x25y56z7" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y56z7.c",
  "south" : DIR+"/rooms/x25y55z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
