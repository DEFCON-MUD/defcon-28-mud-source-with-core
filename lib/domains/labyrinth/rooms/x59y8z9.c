inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 8, 9 }));
  set_short( "Corridor - x59y8z9" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y8z9.c",
  "north" : DIR+"/rooms/x59y9z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
