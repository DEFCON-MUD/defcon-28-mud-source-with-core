inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 2, 8 }));
  set_short( "Corridor - x50y2z8" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y2z8.c",
  "east" : DIR+"/rooms/x51y2z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
