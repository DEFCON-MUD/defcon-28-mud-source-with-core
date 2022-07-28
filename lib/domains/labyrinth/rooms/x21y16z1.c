inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 1 }));
  set_short( "Corridor - x21y16z1" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y17z1.c",
  "south" : DIR+"/rooms/x21y15z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
