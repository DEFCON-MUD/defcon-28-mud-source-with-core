inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 54, 3 }));
  set_short( "Corridor - x26y54z3" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y54z3.c",
  "east" : DIR+"/rooms/x27y54z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
