inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 0, 5 }));
  set_short( "Corridor - x9y0z5" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y0z5.c",
  "east" : DIR+"/rooms/x10y0z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
