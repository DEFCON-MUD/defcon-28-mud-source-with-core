inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 35, 1 }));
  set_short( "Passage - x47y35z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y36z1.c",
  "south" : DIR+"/rooms/x47y34z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
