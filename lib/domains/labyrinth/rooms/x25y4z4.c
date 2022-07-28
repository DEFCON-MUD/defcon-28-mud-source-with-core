inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 4 }));
  set_short( "Hallway - x25y4z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y4z4.c",
  "north" : DIR+"/rooms/x25y5z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
