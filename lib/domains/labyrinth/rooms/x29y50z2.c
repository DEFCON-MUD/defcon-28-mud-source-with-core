inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 2 }));
  set_short( "Passage - x29y50z2" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y50z2.c",
  "north" : DIR+"/rooms/x29y51z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
