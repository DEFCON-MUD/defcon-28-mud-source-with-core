inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 24, 0 }));
  set_short( "Passage - x4y24z0" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y24z0.c",
  "east" : DIR+"/rooms/x5y24z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
