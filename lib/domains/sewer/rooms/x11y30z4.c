inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 30, 4 }));
  set_short( "Hallway - x11y30z4" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y30z4.c",
  "east" : DIR+"/rooms/x12y30z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
