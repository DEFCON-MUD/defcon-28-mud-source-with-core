inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 6 }));
  set_short( "Corridor - x49y60z6" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z6.c",
  "north" : DIR+"/rooms/x49y61z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
