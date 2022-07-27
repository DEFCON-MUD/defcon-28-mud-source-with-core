inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 5 }));
  set_short( "Passage - x35y56z5" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "south" : DIR+"/rooms/x35y55z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
