inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 60, 1 }));
  set_short( "Hallway - x39y60z1" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y60z1.c",
  "east" : DIR+"/rooms/x40y60z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
