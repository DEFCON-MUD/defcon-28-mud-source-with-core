inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 2 }));
  set_short( "Passage - x17y48z2" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y48z2.c",
  "north" : DIR+"/rooms/x17y49z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
