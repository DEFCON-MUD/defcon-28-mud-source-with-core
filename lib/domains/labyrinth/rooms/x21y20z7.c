inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 20, 7 }));
  set_short( "Corridor - x21y20z7" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y21z7.c",
  "south" : DIR+"/rooms/x21y19z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
