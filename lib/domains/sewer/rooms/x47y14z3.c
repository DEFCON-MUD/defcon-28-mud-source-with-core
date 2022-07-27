inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 14, 3 }));
  set_short( "Passage - x47y14z3" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y14z3.c",
  "north" : DIR+"/rooms/x47y15z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
