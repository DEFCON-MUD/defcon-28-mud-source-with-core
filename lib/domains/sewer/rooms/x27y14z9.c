inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 9 }));
  set_short( "Corridor - x27y14z9" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y14z9.c",
  "east" : DIR+"/rooms/x28y14z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
