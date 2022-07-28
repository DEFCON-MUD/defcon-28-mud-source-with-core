inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 48, 3 }));
  set_short( "Corridor - x10y48z3" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y48z3.c",
  "east" : DIR+"/rooms/x11y48z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
