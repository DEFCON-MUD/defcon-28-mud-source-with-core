inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 2 }));
  set_short( "Hallway - x47y54z2" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y54z2.c",
  "east" : DIR+"/rooms/x48y54z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
