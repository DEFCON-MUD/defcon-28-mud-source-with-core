inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 28, 6 }));
  set_short( "Hallway - x26y28z6" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y28z6.c",
  "east" : DIR+"/rooms/x27y28z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
