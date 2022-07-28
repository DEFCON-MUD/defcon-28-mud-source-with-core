inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 44, 2 }));
  set_short( "Passage - x12y44z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y44z2.c",
  "east" : DIR+"/rooms/x13y44z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
