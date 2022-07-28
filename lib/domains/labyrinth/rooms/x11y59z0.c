inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 0 }));
  set_short( "Passage - x11y59z0" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z0.c",
  "south" : DIR+"/rooms/x11y58z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
