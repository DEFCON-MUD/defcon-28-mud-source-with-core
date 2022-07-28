inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 3, 5 }));
  set_short( "Passage - x37y3z5" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y4z5.c",
  "south" : DIR+"/rooms/x37y2z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
