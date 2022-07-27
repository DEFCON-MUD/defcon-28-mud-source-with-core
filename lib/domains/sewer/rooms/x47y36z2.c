inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 2 }));
  set_short( "Hallway - x47y36z2" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y36z2.c",
  "south" : DIR+"/rooms/x47y35z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
