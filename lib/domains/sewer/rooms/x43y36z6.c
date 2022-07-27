inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 6 }));
  set_short( "Corridor - x43y36z6" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y36z6.c",
  "north" : DIR+"/rooms/x43y37z6.c",
  "south" : DIR+"/rooms/x43y35z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
