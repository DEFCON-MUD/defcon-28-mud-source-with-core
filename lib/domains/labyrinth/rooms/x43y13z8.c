inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 13, 8 }));
  set_short( "Hallway - x43y13z8" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y14z8.c",
  "south" : DIR+"/rooms/x43y12z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
