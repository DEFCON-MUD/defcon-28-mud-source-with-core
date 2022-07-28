inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 26, 6 }));
  set_short( "Passage - x9y26z6" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y26z6.c",
  "east" : DIR+"/rooms/x10y26z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
