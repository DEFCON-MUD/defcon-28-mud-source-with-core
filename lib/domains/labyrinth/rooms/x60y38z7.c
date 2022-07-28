inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 38, 7 }));
  set_short( "Passage - x60y38z7" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y38z7.c",
  "east" : DIR+"/rooms/x61y38z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
