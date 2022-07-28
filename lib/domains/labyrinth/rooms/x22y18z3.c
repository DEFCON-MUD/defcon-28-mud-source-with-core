inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 18, 3 }));
  set_short( "Corridor - x22y18z3" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y18z3.c",
  "east" : DIR+"/rooms/x23y18z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
