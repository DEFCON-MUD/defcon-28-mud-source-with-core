inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 33, 9 }));
  set_short( "Hallway - x15y33z9" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y34z9.c",
  "south" : DIR+"/rooms/x15y32z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
