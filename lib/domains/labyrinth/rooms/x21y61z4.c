inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 61, 4 }));
  set_short( "Corridor - x21y61z4" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y62z4.c",
  "south" : DIR+"/rooms/x21y60z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
