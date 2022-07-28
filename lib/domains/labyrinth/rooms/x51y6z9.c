inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 9 }));
  set_short( "Corridor - x51y6z9" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y6z9.c",
  "south" : DIR+"/rooms/x51y5z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
