inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 12, 2 }));
  set_short( "Passage - x43y12z2" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y12z2.c",
  "south" : DIR+"/rooms/x43y11z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
