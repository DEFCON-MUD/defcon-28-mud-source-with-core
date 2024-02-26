inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 10, 5 }));
  set_short( "Passage - x6y10z5" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y10z5.c",
  "east" : DIR+"/rooms/x7y10z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
