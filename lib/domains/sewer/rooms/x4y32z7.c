inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 32, 7 }));
  set_short( "Hallway - x4y32z7" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y32z7.c",
  "east" : DIR+"/rooms/x5y32z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
