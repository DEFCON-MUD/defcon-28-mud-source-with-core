inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 42, 3 }));
  set_short( "Corridor - x43y42z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y42z3.c",
  "north" : DIR+"/rooms/x43y43z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
