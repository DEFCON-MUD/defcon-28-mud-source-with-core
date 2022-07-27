inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 32, 8 }));
  set_short( "Corridor - x37y32z8" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y32z8.c",
  "east" : DIR+"/rooms/x38y32z8.c",
  "north" : DIR+"/rooms/x37y33z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
