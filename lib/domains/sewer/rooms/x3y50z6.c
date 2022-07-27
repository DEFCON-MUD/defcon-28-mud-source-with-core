inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 50, 6 }));
  set_short( "Corridor - x3y50z6" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y50z6.c",
  "south" : DIR+"/rooms/x3y49z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
