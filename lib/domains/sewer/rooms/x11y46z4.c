inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 4 }));
  set_short( "Passage - x11y46z4" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y46z4.c",
  "north" : DIR+"/rooms/x11y47z4.c",
  "south" : DIR+"/rooms/x11y45z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
