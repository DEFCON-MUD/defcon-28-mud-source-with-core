inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 3 }));
  set_short( "Corridor - x35y6z3" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y6z3.c",
  "east" : DIR+"/rooms/x36y6z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
