inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 56, 2 }));
  set_short( "Passage - x44y56z2" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y56z2.c",
  "east" : DIR+"/rooms/x45y56z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
