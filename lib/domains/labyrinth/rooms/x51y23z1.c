inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 23, 1 }));
  set_short( "Passage - x51y23z1" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y24z1.c",
  "south" : DIR+"/rooms/x51y22z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
