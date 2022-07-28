inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 0 }));
  set_short( "Corridor - x29y45z0" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z0.c",
  "south" : DIR+"/rooms/x29y44z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
