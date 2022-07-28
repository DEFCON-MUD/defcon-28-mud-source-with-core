inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 1 }));
  set_short( "Corridor - x13y34z1" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y34z1.c",
  "south" : DIR+"/rooms/x13y33z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
