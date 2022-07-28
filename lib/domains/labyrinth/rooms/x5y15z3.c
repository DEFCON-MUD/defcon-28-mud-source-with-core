inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 15, 3 }));
  set_short( "Hallway - x5y15z3" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y16z3.c",
  "south" : DIR+"/rooms/x5y14z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
