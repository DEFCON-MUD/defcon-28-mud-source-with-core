inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 64, 1 }));
  set_short( "Passage - x29y64z1" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y64z1.c",
  "east" : DIR+"/rooms/x30y64z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
