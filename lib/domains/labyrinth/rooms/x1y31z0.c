inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 31, 0 }));
  set_short( "Passage - x1y31z0" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y32z0.c",
  "south" : DIR+"/rooms/x1y30z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
