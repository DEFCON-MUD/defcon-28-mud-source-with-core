inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 12, 0 }));
  set_short( "Passage - x40y12z0" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y12z0.c",
  "east" : DIR+"/rooms/x41y12z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
