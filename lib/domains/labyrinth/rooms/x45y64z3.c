inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 64, 3 }));
  set_short( "Corridor - x45y64z3" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y64z3.c",
  "east" : DIR+"/rooms/x46y64z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
