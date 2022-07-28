inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 28, 8 }));
  set_short( "Hallway - x57y28z8" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y28z8.c",
  "north" : DIR+"/rooms/x57y29z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
