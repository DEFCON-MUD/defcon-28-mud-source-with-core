inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 0 }));
  set_short( "Passage - x29y60z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y60z0.c",
  "east" : DIR+"/rooms/x30y60z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
