inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 57, 3 }));
  set_short( "Passage - x25y57z3" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y58z3.c",
  "south" : DIR+"/rooms/x25y56z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
