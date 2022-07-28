inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 34, 8 }));
  set_short( "Corridor - x23y34z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y34z8.c",
  "south" : DIR+"/rooms/x23y33z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
