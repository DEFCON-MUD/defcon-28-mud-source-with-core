inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 24, 5 }));
  set_short( "Passage - x46y24z5" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y24z5.c",
  "east" : DIR+"/rooms/x47y24z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
