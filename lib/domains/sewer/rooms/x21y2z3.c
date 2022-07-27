inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 2, 3 }));
  set_short( "Passage - x21y2z3" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y2z3.c",
  "north" : DIR+"/rooms/x21y3z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
