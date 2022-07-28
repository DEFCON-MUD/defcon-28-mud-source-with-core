inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 4 }));
  set_short( "Passage - x23y56z4" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y57z4.c",
  "south" : DIR+"/rooms/x23y55z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
