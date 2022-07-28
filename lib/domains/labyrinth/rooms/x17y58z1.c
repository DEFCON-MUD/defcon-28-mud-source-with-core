inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 58, 1 }));
  set_short( "Hallway - x17y58z1" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y58z1.c",
  "east" : DIR+"/rooms/x18y58z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
