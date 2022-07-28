inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 6 }));
  set_short( "Hallway - x53y34z6" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y34z6.c",
  "south" : DIR+"/rooms/x53y33z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
