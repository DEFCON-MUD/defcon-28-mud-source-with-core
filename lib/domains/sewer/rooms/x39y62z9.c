inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 9 }));
  set_short( "Passage - x39y62z9" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z9.c",
  "east" : DIR+"/rooms/x40y62z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
