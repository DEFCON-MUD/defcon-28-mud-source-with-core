inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 6, 1 }));
  set_short( "Passage - x25y6z1" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y6z1.c",
  "north" : DIR+"/rooms/x25y7z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
