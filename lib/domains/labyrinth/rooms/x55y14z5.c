inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 14, 5 }));
  set_short( "Hallway - x55y14z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y14z5.c",
  "north" : DIR+"/rooms/x55y15z5.c",
  "south" : DIR+"/rooms/x55y13z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
