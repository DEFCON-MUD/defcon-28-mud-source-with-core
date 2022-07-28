inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 28, 3 }));
  set_short( "Passage - x16y28z3" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y28z3.c",
  "east" : DIR+"/rooms/x17y28z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
