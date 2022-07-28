inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 4 }));
  set_short( "Corridor - x51y34z4" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y34z4.c",
  "north" : DIR+"/rooms/x51y35z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
