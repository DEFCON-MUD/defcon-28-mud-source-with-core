inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 50, 8 }));
  set_short( "Passage - x56y50z8" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y50z8.c",
  "east" : DIR+"/rooms/x57y50z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
