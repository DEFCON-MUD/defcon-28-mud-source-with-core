inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 15, 9 }));
  set_short( "Hallway - x15y15z9" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y16z9.c",
  "south" : DIR+"/rooms/x15y14z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
