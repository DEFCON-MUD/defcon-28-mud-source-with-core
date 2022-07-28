inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 46, 3 }));
  set_short( "Corridor - x36y46z3" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y46z3.c",
  "east" : DIR+"/rooms/x37y46z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
