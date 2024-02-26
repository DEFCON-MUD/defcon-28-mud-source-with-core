inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 0 }));
  set_short( "Passage - x57y12z0" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y12z0.c",
  "north" : DIR+"/rooms/x57y13z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
