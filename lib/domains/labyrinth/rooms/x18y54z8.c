inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 54, 8 }));
  set_short( "Corridor - x18y54z8" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y54z8.c",
  "east" : DIR+"/rooms/x19y54z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
