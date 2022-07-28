inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 2 }));
  set_short( "Hallway - x29y18z2" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y18z2.c",
  "north" : DIR+"/rooms/x29y19z2.c",
  "south" : DIR+"/rooms/x29y17z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
