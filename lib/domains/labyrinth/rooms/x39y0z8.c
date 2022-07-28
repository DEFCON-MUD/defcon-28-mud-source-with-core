inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 0, 8 }));
  set_short( "Corridor - x39y0z8" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y0z8.c",
  "east" : DIR+"/rooms/x40y0z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
