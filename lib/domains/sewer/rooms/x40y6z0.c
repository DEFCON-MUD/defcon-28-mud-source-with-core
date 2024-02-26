inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 6, 0 }));
  set_short( "Corridor - x40y6z0" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y6z0.c",
  "east" : DIR+"/rooms/x41y6z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
