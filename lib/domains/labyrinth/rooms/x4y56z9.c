inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 56, 9 }));
  set_short( "Passage - x4y56z9" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y56z9.c",
  "east" : DIR+"/rooms/x5y56z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
