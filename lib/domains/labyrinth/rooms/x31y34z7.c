inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 34, 7 }));
  set_short( "Passage - x31y34z7" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y34z7.c",
  "north" : DIR+"/rooms/x31y35z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
