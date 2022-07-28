inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 9 }));
  set_short( "Corridor - x7y22z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y22z9.c",
  "south" : DIR+"/rooms/x7y21z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
