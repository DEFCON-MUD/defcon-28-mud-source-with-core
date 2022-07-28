inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 8 }));
  set_short( "Hallway - x23y62z8" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y62z8.c",
  "east" : DIR+"/rooms/x24y62z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
