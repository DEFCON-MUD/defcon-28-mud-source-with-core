inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 28, 2 }));
  set_short( "Corridor - x11y28z2" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y28z2.c",
  "east" : DIR+"/rooms/x12y28z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
