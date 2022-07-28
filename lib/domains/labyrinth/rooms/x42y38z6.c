inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 38, 6 }));
  set_short( "Hallway - x42y38z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y38z6.c",
  "east" : DIR+"/rooms/x43y38z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
