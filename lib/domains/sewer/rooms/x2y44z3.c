inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 44, 3 }));
  set_short( "Corridor - x2y44z3" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y44z3.c",
  "east" : DIR+"/rooms/x3y44z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
