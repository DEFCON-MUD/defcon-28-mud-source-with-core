inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 3 }));
  set_short( "Corridor - x49y14z3" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y14z3.c",
  "north" : DIR+"/rooms/x49y15z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
