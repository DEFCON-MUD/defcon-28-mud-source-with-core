inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 6, 1 }));
  set_short( "Corridor - x1y6z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y7z1.c",
  "south" : DIR+"/rooms/x1y5z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
