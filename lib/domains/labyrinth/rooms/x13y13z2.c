inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 13, 2 }));
  set_short( "Corridor - x13y13z2" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y14z2.c",
  "south" : DIR+"/rooms/x13y12z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
