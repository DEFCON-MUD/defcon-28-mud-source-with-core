inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 33, 4 }));
  set_short( "Corridor - x17y33z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y34z4.c",
  "south" : DIR+"/rooms/x17y32z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
