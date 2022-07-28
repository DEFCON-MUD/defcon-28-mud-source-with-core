inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 50, 3 }));
  set_short( "Corridor - x22y50z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y50z3.c",
  "east" : DIR+"/rooms/x23y50z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
