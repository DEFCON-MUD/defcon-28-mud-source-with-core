inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 7 }));
  set_short( "Passage - x27y12z7" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y12z7.c",
  "north" : DIR+"/rooms/x27y13z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
