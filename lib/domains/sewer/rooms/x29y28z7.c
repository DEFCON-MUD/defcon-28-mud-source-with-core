inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 7 }));
  set_short( "Passage - x29y28z7" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z7.c",
  "east" : DIR+"/rooms/x30y28z7.c",
  "north" : DIR+"/rooms/x29y29z7.c",
  "south" : DIR+"/rooms/x29y27z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
