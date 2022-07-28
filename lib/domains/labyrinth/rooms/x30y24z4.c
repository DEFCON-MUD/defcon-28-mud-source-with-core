inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 24, 4 }));
  set_short( "Corridor - x30y24z4" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y24z4.c",
  "east" : DIR+"/rooms/x31y24z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
