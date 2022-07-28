inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 18, 4 }));
  set_short( "Hallway - x22y18z4" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y18z4.c",
  "east" : DIR+"/rooms/x23y18z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
