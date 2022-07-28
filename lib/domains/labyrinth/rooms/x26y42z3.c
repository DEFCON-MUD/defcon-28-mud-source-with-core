inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 42, 3 }));
  set_short( "Corridor - x26y42z3" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y42z3.c",
  "east" : DIR+"/rooms/x27y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
