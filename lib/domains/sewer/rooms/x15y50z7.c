inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 50, 7 }));
  set_short( "Passage - x15y50z7" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y50z7.c",
  "south" : DIR+"/rooms/x15y49z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
