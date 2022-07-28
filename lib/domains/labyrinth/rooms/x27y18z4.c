inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 18, 4 }));
  set_short( "Corridor - x27y18z4" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y18z4.c",
  "north" : DIR+"/rooms/x27y19z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
