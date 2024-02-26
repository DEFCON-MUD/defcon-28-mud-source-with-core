inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 4 }));
  set_short( "Hallway - x39y52z4" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y52z4.c",
  "south" : DIR+"/rooms/x39y51z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
