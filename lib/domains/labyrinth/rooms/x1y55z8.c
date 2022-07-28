inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 55, 8 }));
  set_short( "Passage - x1y55z8" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y56z8.c",
  "south" : DIR+"/rooms/x1y54z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
