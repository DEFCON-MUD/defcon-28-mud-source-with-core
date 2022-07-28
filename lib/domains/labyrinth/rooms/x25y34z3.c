inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 34, 3 }));
  set_short( "Corridor - x25y34z3" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y35z3.c",
  "south" : DIR+"/rooms/x25y33z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
