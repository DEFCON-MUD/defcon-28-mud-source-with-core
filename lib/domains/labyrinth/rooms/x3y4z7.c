inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 7 }));
  set_short( "Passage - x3y4z7" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y4z7.c",
  "north" : DIR+"/rooms/x3y5z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
