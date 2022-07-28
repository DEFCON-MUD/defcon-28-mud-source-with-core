inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 20, 4 }));
  set_short( "Hallway - x55y20z4" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y20z4.c",
  "north" : DIR+"/rooms/x55y21z4.c",
  "south" : DIR+"/rooms/x55y19z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
