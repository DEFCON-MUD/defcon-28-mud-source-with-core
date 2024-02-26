inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 8 }));
  set_short( "Passage - x11y52z8" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y52z8.c",
  "north" : DIR+"/rooms/x11y53z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
