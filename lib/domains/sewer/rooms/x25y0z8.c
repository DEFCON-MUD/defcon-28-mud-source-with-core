inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 0, 8 }));
  set_short( "Passage - x25y0z8" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y0z8.c",
  "east" : DIR+"/rooms/x26y0z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
