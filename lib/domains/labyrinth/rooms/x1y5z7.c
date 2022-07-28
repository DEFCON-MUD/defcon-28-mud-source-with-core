inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 7 }));
  set_short( "Passage - x1y5z7" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z7.c",
  "south" : DIR+"/rooms/x1y4z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
