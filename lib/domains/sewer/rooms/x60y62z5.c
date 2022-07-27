inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 5 }));
  set_short( "Corridor - x60y62z5" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z5.c",
  "east" : DIR+"/rooms/x61y62z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
