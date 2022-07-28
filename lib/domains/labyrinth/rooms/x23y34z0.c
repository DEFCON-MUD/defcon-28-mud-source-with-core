inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 34, 0 }));
  set_short( "Passage - x23y34z0" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y35z0.c",
  "south" : DIR+"/rooms/x23y33z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
