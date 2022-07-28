inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 9 }));
  set_short( "Hallway - x19y24z9" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y24z9.c",
  "east" : DIR+"/rooms/x20y24z9.c",
  "north" : DIR+"/rooms/x19y25z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
