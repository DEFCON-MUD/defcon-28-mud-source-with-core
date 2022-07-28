inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 10, 2 }));
  set_short( "Passage - x16y10z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y10z2.c",
  "east" : DIR+"/rooms/x17y10z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
