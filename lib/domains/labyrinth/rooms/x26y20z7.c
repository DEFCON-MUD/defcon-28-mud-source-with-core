inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 20, 7 }));
  set_short( "Passage - x26y20z7" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y20z7.c",
  "east" : DIR+"/rooms/x27y20z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
