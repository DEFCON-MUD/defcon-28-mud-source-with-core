inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 60, 5 }));
  set_short( "Corridor - x19y60z5" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y60z5.c",
  "south" : DIR+"/rooms/x19y59z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
