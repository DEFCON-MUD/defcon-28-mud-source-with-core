inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 60, 8 }));
  set_short( "Passage - x11y60z8" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y61z8.c",
  "south" : DIR+"/rooms/x11y59z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
