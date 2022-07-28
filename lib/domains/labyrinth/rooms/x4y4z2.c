inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 4, 2 }));
  set_short( "Corridor - x4y4z2" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y4z2.c",
  "east" : DIR+"/rooms/x5y4z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
