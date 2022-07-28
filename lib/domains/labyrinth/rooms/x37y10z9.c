inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 10, 9 }));
  set_short( "Hallway - x37y10z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y10z9.c",
  "north" : DIR+"/rooms/x37y11z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
