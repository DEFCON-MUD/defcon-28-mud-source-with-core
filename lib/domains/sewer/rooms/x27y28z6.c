inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 6 }));
  set_short( "Hallway - x27y28z6" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y28z6.c",
  "east" : DIR+"/rooms/x28y28z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
