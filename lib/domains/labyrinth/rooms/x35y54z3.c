inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 3 }));
  set_short( "Corridor - x35y54z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y54z3.c",
  "east" : DIR+"/rooms/x36y54z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
