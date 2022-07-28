inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 60, 9 }));
  set_short( "Corridor - x10y60z9" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y60z9.c",
  "east" : DIR+"/rooms/x11y60z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
