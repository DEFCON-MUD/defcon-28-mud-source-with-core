inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 9 }));
  set_short( "Hallway - x21y16z9" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y16z9.c",
  "south" : DIR+"/rooms/x21y15z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
