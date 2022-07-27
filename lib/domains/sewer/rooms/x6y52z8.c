inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 52, 8 }));
  set_short( "Corridor - x6y52z8" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y52z8.c",
  "east" : DIR+"/rooms/x7y52z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
