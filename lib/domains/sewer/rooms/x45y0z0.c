inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 0, 0 }));
  set_short( "Corridor - x45y0z0" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y0z0.c",
  "east" : DIR+"/rooms/x46y0z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
