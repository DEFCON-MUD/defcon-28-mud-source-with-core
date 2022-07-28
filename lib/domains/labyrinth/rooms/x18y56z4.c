inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 56, 4 }));
  set_short( "Passage - x18y56z4" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y56z4.c",
  "east" : DIR+"/rooms/x19y56z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
