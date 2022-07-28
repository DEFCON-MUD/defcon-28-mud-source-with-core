inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 33, 0 }));
  set_short( "Corridor - x19y33z0" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y34z0.c",
  "south" : DIR+"/rooms/x19y32z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
