inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 9 }));
  set_short( "Passage - x59y54z9" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y54z9.c",
  "north" : DIR+"/rooms/x59y55z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
