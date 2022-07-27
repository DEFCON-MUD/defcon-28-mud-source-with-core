inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 7 }));
  set_short( "Corridor - x27y6z7" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y6z7.c",
  "north" : DIR+"/rooms/x27y7z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
