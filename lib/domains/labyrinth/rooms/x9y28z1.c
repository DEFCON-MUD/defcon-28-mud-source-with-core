inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 1 }));
  set_short( "Corridor - x9y28z1" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y28z1.c",
  "north" : DIR+"/rooms/x9y29z1.c",
  "south" : DIR+"/rooms/x9y27z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
