inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 8 }));
  set_short( "Hallway - x49y26z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y26z8.c",
  "north" : DIR+"/rooms/x49y27z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
