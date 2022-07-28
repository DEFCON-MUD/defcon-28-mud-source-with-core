inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 23, 2 }));
  set_short( "Hallway - x29y23z2" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y24z2.c",
  "south" : DIR+"/rooms/x29y22z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
