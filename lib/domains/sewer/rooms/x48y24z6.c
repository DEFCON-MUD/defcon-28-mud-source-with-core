inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 24, 6 }));
  set_short( "Corridor - x48y24z6" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y24z6.c",
  "east" : DIR+"/rooms/x49y24z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
