inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 8, 3 }));
  set_short( "Passage - x37y8z3" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y8z3.c",
  "east" : DIR+"/rooms/x38y8z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
