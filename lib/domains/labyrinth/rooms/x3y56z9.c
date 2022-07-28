inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 9 }));
  set_short( "Corridor - x3y56z9" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y56z9.c",
  "south" : DIR+"/rooms/x3y55z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
