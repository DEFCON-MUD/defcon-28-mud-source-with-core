inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 5, 3 }));
  set_short( "Hallway - x5y5z3" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y6z3.c",
  "south" : DIR+"/rooms/x5y4z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
