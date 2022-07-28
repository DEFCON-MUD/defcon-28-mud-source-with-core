inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 38, 3 }));
  set_short( "Passage - x36y38z3" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y38z3.c",
  "east" : DIR+"/rooms/x37y38z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
