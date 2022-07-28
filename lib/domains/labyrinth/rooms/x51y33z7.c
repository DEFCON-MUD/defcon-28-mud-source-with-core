inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 33, 7 }));
  set_short( "Passage - x51y33z7" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y34z7.c",
  "south" : DIR+"/rooms/x51y32z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
