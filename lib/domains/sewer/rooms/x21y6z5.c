inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 6, 5 }));
  set_short( "Corridor - x21y6z5" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y7z5.c",
  "south" : DIR+"/rooms/x21y5z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
