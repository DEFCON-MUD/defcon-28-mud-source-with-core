inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 4, 3 }));
  set_short( "Hallway - x57y4z3" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y4z3.c",
  "east" : DIR+"/rooms/x58y4z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
