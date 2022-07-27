inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 14, 3 }));
  set_short( "Hallway - x58y14z3" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y14z3.c",
  "east" : DIR+"/rooms/x59y14z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
