inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 3 }));
  set_short( "Corridor - x53y24z3" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y24z3.c",
  "south" : DIR+"/rooms/x53y23z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
