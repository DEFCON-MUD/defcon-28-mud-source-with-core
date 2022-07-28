inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 3 }));
  set_short( "Corridor - x33y4z3" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y4z3.c",
  "east" : DIR+"/rooms/x34y4z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
