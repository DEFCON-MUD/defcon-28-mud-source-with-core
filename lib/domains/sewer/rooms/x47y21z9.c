inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 21, 9 }));
  set_short( "Corridor - x47y21z9" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y22z9.c",
  "south" : DIR+"/rooms/x47y20z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
