inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 22, 2 }));
  set_short( "Passage - x5y22z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y22z2.c",
  "north" : DIR+"/rooms/x5y23z2.c",
  "south" : DIR+"/rooms/x5y21z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
