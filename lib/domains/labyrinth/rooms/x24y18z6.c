inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 18, 6 }));
  set_short( "Corridor - x24y18z6" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y18z6.c",
  "east" : DIR+"/rooms/x25y18z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
