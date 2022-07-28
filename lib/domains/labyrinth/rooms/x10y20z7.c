inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 20, 7 }));
  set_short( "Corridor - x10y20z7" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y20z7.c",
  "east" : DIR+"/rooms/x11y20z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
