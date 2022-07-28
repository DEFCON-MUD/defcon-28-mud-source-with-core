inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 8 }));
  set_short( "Passage - x1y60z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y61z8.c",
  "south" : DIR+"/rooms/x1y59z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
