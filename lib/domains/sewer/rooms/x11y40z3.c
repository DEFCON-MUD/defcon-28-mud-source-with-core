inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 40, 3 }));
  set_short( "Passage - x11y40z3" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y40z3.c",
  "south" : DIR+"/rooms/x11y39z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
