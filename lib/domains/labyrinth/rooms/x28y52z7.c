inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 52, 7 }));
  set_short( "Passage - x28y52z7" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y52z7.c",
  "east" : DIR+"/rooms/x29y52z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
