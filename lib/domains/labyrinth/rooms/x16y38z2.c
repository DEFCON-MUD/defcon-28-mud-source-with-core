inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 38, 2 }));
  set_short( "Passage - x16y38z2" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y38z2.c",
  "east" : DIR+"/rooms/x17y38z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
