inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 62, 9 }));
  set_short( "Passage - x38y62z9" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y62z9.c",
  "east" : DIR+"/rooms/x39y62z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
