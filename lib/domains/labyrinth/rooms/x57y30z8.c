inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 8 }));
  set_short( "Hallway - x57y30z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y31z8.c",
  "south" : DIR+"/rooms/x57y29z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
