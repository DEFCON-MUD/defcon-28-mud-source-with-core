inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 0, 5 }));
  set_short( "Corridor - x48y0z5" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y0z5.c",
  "east" : DIR+"/rooms/x49y0z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
