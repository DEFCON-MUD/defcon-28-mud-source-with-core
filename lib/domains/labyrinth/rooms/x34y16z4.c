inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 16, 4 }));
  set_short( "Passage - x34y16z4" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y16z4.c",
  "east" : DIR+"/rooms/x35y16z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
