inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 7 }));
  set_short( "Passage - x9y54z7" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y54z7.c",
  "south" : DIR+"/rooms/x9y53z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
