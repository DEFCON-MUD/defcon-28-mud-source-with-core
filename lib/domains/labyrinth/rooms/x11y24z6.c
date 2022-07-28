inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 6 }));
  set_short( "Corridor - x11y24z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y24z6.c",
  "south" : DIR+"/rooms/x11y23z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
