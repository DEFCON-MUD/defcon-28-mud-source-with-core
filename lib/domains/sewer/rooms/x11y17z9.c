inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 9 }));
  set_short( "Passage - x11y17z9" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z9.c",
  "south" : DIR+"/rooms/x11y16z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
