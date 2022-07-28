inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 57, 8 }));
  set_short( "Passage - x17y57z8" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y58z8.c",
  "south" : DIR+"/rooms/x17y56z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
