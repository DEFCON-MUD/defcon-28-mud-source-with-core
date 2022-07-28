inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 1 }));
  set_short( "Passage - x5y10z1" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y10z1.c",
  "north" : DIR+"/rooms/x5y11z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
