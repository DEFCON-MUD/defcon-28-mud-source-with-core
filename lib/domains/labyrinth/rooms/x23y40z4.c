inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 40, 4 }));
  set_short( "Corridor - x23y40z4" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y40z4.c",
  "south" : DIR+"/rooms/x23y39z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
