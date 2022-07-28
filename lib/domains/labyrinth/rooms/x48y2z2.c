inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 2, 2 }));
  set_short( "Passage - x48y2z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y2z2.c",
  "east" : DIR+"/rooms/x49y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
