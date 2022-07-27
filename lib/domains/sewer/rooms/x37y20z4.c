inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 4 }));
  set_short( "Passage - x37y20z4" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y20z4.c",
  "south" : DIR+"/rooms/x37y19z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
