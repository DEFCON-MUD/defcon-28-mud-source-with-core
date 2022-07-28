inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 0, 3 }));
  set_short( "Hallway - x29y0z3" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y0z3.c",
  "east" : DIR+"/rooms/x30y0z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
