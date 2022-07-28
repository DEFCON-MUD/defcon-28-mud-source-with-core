inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 7, 9 }));
  set_short( "Hallway - x1y7z9" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y8z9.c",
  "south" : DIR+"/rooms/x1y6z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
