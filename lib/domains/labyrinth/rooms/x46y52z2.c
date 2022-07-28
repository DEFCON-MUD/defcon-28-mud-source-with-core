inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 52, 2 }));
  set_short( "Passage - x46y52z2" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y52z2.c",
  "east" : DIR+"/rooms/x47y52z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
