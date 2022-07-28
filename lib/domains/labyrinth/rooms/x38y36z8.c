inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 36, 8 }));
  set_short( "Passage - x38y36z8" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y36z8.c",
  "east" : DIR+"/rooms/x39y36z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
