inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 12, 2 }));
  set_short( "Passage - x31y12z2" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y12z2.c",
  "east" : DIR+"/rooms/x32y12z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
