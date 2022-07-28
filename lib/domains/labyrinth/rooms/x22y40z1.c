inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 40, 1 }));
  set_short( "Passage - x22y40z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y40z1.c",
  "east" : DIR+"/rooms/x23y40z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
