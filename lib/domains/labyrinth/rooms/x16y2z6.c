inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 2, 6 }));
  set_short( "Passage - x16y2z6" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y2z6.c",
  "east" : DIR+"/rooms/x17y2z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
