inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 21, 6 }));
  set_short( "Hallway - x1y21z6" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y22z6.c",
  "south" : DIR+"/rooms/x1y20z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
