inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 38, 9 }));
  set_short( "Passage - x8y38z9" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y38z9.c",
  "east" : DIR+"/rooms/x9y38z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
