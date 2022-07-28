inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 0, 5 }));
  set_short( "Hallway - x12y0z5" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y0z5.c",
  "east" : DIR+"/rooms/x13y0z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
