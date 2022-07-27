inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 33, 9 }));
  set_short( "Passage - x35y33z9" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y34z9.c",
  "south" : DIR+"/rooms/x35y32z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
