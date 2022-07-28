inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 37, 5 }));
  set_short( "Corridor - x19y37z5" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y38z5.c",
  "south" : DIR+"/rooms/x19y36z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
