inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 24, 2 }));
  set_short( "Corridor - x60y24z2" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y24z2.c",
  "east" : DIR+"/rooms/x61y24z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
