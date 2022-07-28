inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 8, 9 }));
  set_short( "Corridor - x12y8z9" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y8z9.c",
  "east" : DIR+"/rooms/x13y8z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
