inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 29, 3 }));
  set_short( "Passage - x5y29z3" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y30z3.c",
  "south" : DIR+"/rooms/x5y28z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
