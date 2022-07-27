inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 5 }));
  set_short( "Passage - x37y46z5" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y46z5.c",
  "north" : DIR+"/rooms/x37y47z5.c",
  "south" : DIR+"/rooms/x37y45z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
