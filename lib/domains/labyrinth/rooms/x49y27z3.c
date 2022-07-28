inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 27, 3 }));
  set_short( "Passage - x49y27z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y28z3.c",
  "south" : DIR+"/rooms/x49y26z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
