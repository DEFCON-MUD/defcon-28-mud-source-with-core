inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 27, 4 }));
  set_short( "Corridor - x13y27z4" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y28z4.c",
  "south" : DIR+"/rooms/x13y26z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
