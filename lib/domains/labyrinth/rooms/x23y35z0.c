inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 35, 0 }));
  set_short( "Hallway - x23y35z0" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y36z0.c",
  "south" : DIR+"/rooms/x23y34z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
