inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 13, 6 }));
  set_short( "Passage - x41y13z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y14z6.c",
  "south" : DIR+"/rooms/x41y12z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
