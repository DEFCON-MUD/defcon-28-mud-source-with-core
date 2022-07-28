inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 27, 3 }));
  set_short( "Passage - x1y27z3" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y28z3.c",
  "south" : DIR+"/rooms/x1y26z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
