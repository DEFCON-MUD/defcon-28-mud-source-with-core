inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 9 }));
  set_short( "Passage - x25y14z9" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y14z9.c",
  "south" : DIR+"/rooms/x25y13z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
