inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 23, 3 }));
  set_short( "Passage - x53y23z3" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y24z3.c",
  "south" : DIR+"/rooms/x53y22z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
