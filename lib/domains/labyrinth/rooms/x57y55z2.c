inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 55, 2 }));
  set_short( "Passage - x57y55z2" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y56z2.c",
  "south" : DIR+"/rooms/x57y54z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
