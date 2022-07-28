inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 40, 2 }));
  set_short( "Hallway - x18y40z2" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y40z2.c",
  "east" : DIR+"/rooms/x19y40z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
