inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 3 }));
  set_short( "Corridor - x11y52z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y52z3.c",
  "south" : DIR+"/rooms/x11y51z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
