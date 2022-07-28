inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 15, 7 }));
  set_short( "Hallway - x61y15z7" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y16z7.c",
  "south" : DIR+"/rooms/x61y14z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
