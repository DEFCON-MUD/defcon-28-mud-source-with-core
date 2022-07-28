inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 0 }));
  set_short( "Corridor - x7y48z0" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y48z0.c",
  "south" : DIR+"/rooms/x7y47z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
