inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 58, 6 }));
  set_short( "Hallway - x37y58z6" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y58z6.c",
  "east" : DIR+"/rooms/x38y58z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
