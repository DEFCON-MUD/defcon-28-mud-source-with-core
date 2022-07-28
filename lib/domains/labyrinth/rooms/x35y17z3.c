inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 17, 3 }));
  set_short( "Corridor - x35y17z3" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y18z3.c",
  "south" : DIR+"/rooms/x35y16z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
