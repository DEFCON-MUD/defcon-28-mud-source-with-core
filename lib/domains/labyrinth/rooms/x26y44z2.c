inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 44, 2 }));
  set_short( "Corridor - x26y44z2" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y44z2.c",
  "east" : DIR+"/rooms/x27y44z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
