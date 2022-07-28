inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 31, 1 }));
  set_short( "Hallway - x41y31z1" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y32z1.c",
  "south" : DIR+"/rooms/x41y30z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
