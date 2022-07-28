inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 50, 3 }));
  set_short( "Corridor - x6y50z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y50z3.c",
  "east" : DIR+"/rooms/x7y50z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
