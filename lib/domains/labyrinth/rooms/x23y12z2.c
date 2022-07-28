inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 2 }));
  set_short( "Passage - x23y12z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y12z2.c",
  "north" : DIR+"/rooms/x23y13z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
