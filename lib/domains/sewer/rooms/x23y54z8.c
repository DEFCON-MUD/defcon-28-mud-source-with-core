inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 8 }));
  set_short( "Passage - x23y54z8" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y54z8.c",
  "south" : DIR+"/rooms/x23y53z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
