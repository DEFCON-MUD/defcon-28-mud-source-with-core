inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 21, 1 }));
  set_short( "Passage - x55y21z1" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y22z1.c",
  "south" : DIR+"/rooms/x55y20z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
