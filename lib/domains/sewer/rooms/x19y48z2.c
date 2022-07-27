inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 2 }));
  set_short( "Hallway - x19y48z2" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "south" : DIR+"/rooms/x19y47z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
