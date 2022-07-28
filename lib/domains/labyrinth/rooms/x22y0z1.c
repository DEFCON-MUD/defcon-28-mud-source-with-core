inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 1 }));
  set_short( "Passage - x22y0z1" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z1.c",
  "east" : DIR+"/rooms/x23y0z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
