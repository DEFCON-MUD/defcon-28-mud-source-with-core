inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 47, 1 }));
  set_short( "Corridor - x1y47z1" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y48z1.c",
  "south" : DIR+"/rooms/x1y46z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
