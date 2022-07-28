inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 46, 3 }));
  set_short( "Hallway - x46y46z3" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y46z3.c",
  "east" : DIR+"/rooms/x47y46z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
