inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 3 }));
  set_short( "Corridor - x3y48z3" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y48z3.c",
  "east" : DIR+"/rooms/x4y48z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
