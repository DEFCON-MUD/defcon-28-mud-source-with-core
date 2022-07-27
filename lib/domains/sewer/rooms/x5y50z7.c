inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 50, 7 }));
  set_short( "Passage - x5y50z7" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y50z7.c",
  "south" : DIR+"/rooms/x5y49z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
