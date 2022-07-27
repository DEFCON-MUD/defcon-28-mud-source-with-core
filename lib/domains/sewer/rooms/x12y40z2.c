inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 40, 2 }));
  set_short( "Corridor - x12y40z2" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y40z2.c",
  "east" : DIR+"/rooms/x13y40z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
