inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 8 }));
  set_short( "Passage - x38y0z8" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z8.c",
  "east" : DIR+"/rooms/x39y0z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
