inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 5 }));
  set_short( "Corridor - x3y55z5" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z5.c",
  "south" : DIR+"/rooms/x3y54z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
