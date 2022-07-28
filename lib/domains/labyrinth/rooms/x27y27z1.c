inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 27, 1 }));
  set_short( "Passage - x27y27z1" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y28z1.c",
  "south" : DIR+"/rooms/x27y26z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
