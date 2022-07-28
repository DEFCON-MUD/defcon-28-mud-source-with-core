inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 17, 3 }));
  set_short( "Corridor - x29y17z3" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y18z3.c",
  "south" : DIR+"/rooms/x29y16z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
