inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 42, 0 }));
  set_short( "Passage - x31y42z0" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y42z0.c",
  "east" : DIR+"/rooms/x32y42z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
