inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 5 }));
  set_short( "Corridor - x50y64z5" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z5.c",
  "east" : DIR+"/rooms/x51y64z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
