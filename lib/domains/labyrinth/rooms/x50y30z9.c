inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 30, 9 }));
  set_short( "Hallway - x50y30z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y30z9.c",
  "east" : DIR+"/rooms/x51y30z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
