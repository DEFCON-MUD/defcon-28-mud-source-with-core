inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 7, 3 }));
  set_short( "Hallway - x51y7z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y8z3.c",
  "south" : DIR+"/rooms/x51y6z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
