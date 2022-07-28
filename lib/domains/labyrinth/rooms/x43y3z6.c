inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 3, 6 }));
  set_short( "Hallway - x43y3z6" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y4z6.c",
  "south" : DIR+"/rooms/x43y2z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
