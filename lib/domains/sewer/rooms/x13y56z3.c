inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 56, 3 }));
  set_short( "Passage - x13y56z3" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y57z3.c",
  "south" : DIR+"/rooms/x13y55z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
