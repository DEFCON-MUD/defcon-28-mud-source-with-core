inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 5 }));
  set_short( "Passage - x11y64z5" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z5.c",
  "east" : DIR+"/rooms/x12y64z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
