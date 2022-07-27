inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 1 }));
  set_short( "Passage - x47y54z1" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y54z1.c",
  "north" : DIR+"/rooms/x47y55z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
