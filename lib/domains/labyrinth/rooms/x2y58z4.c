inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 58, 4 }));
  set_short( "Passage - x2y58z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y58z4.c",
  "east" : DIR+"/rooms/x3y58z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
