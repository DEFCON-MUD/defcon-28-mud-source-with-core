inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 0 }));
  set_short( "Corridor - x22y0z0" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z0.c",
  "east" : DIR+"/rooms/x23y0z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
