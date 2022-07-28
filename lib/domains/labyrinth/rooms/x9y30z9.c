inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 9 }));
  set_short( "Passage - x9y30z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y30z9.c",
  "east" : DIR+"/rooms/x10y30z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
