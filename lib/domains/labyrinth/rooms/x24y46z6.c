inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 46, 6 }));
  set_short( "Passage - x24y46z6" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y46z6.c",
  "east" : DIR+"/rooms/x25y46z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
