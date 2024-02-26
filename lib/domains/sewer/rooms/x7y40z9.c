inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 9 }));
  set_short( "Passage - x7y40z9" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y40z9.c",
  "north" : DIR+"/rooms/x7y41z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
