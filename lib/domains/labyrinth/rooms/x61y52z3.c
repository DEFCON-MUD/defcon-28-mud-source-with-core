inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 3 }));
  set_short( "Passage - x61y52z3" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z3.c",
  "south" : DIR+"/rooms/x61y51z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
