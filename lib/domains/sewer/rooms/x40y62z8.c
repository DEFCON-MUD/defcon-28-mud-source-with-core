inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 62, 8 }));
  set_short( "Corridor - x40y62z8" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y62z8.c",
  "east" : DIR+"/rooms/x41y62z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
