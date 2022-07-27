inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 16, 6 }));
  set_short( "Corridor - x30y16z6" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y16z6.c",
  "east" : DIR+"/rooms/x31y16z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
