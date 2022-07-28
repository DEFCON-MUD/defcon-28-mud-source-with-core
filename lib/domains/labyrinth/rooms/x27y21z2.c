inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 21, 2 }));
  set_short( "Passage - x27y21z2" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y22z2.c",
  "south" : DIR+"/rooms/x27y20z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
