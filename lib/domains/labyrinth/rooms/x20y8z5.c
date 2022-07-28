inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 8, 5 }));
  set_short( "Corridor - x20y8z5" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y8z5.c",
  "east" : DIR+"/rooms/x21y8z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
