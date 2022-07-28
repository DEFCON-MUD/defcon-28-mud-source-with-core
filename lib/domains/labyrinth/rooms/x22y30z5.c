inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 30, 5 }));
  set_short( "Hallway - x22y30z5" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y30z5.c",
  "east" : DIR+"/rooms/x23y30z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
