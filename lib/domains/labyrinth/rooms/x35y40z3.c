inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 40, 3 }));
  set_short( "Passage - x35y40z3" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y40z3.c",
  "east" : DIR+"/rooms/x36y40z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
