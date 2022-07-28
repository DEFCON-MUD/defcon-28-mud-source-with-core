inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 64, 6 }));
  set_short( "Hallway - x7y64z6" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y64z6.c",
  "east" : DIR+"/rooms/x8y64z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
