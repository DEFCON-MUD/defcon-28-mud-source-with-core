inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 37, 7 }));
  set_short( "Passage - x23y37z7" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y38z7.c",
  "south" : DIR+"/rooms/x23y36z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
