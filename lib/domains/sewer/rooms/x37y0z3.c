inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 3 }));
  set_short( "Passage - x37y0z3" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z3.c",
  "east" : DIR+"/rooms/x38y0z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
