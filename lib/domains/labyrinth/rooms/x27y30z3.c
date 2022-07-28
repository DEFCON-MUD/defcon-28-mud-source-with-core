inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 3 }));
  set_short( "Passage - x27y30z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y30z3.c",
  "south" : DIR+"/rooms/x27y29z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
