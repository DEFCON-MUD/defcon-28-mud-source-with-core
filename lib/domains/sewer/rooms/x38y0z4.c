inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 4 }));
  set_short( "Corridor - x38y0z4" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z4.c",
  "east" : DIR+"/rooms/x39y0z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
