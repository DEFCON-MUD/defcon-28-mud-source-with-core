inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 30, 0 }));
  set_short( "Passage - x20y30z0" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y30z0.c",
  "east" : DIR+"/rooms/x21y30z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
