inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 23, 3 }));
  set_short( "Passage - x9y23z3" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y24z3.c",
  "south" : DIR+"/rooms/x9y22z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
