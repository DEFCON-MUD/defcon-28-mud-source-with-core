inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 8 }));
  set_short( "Passage - x3y11z8" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z8.c",
  "south" : DIR+"/rooms/x3y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
