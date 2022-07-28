inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 3 }));
  set_short( "Corridor - x11y34z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y35z3.c",
  "south" : DIR+"/rooms/x11y33z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
