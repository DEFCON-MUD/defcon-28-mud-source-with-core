inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 34, 4 }));
  set_short( "Passage - x5y34z4" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y34z4.c",
  "north" : DIR+"/rooms/x5y35z4.c",
  "south" : DIR+"/rooms/x5y33z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
