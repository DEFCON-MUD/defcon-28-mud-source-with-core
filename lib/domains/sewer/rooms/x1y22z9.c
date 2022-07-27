inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 9 }));
  set_short( "Passage - x1y22z9" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y22z9.c",
  "north" : DIR+"/rooms/x1y23z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
