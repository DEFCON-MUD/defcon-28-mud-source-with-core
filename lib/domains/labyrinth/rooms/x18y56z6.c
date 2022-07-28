inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 56, 6 }));
  set_short( "Hallway - x18y56z6" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y56z6.c",
  "east" : DIR+"/rooms/x19y56z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
