inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 3 }));
  set_short( "Corridor - x44y0z3" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z3.c",
  "east" : DIR+"/rooms/x45y0z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
