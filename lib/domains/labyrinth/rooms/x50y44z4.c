inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 44, 4 }));
  set_short( "Hallway - x50y44z4" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y44z4.c",
  "east" : DIR+"/rooms/x51y44z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
