inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 1 }));
  set_short( "Corridor - x1y36z1" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y36z1.c",
  "south" : DIR+"/rooms/x1y35z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
