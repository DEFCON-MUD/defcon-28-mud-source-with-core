inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 8 }));
  set_short( "Corridor - x23y52z8" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y52z8.c",
  "north" : DIR+"/rooms/x23y53z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
