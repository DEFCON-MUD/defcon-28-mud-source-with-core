inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 9 }));
  set_short( "Corridor - x53y20z9" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y21z9.c",
  "south" : DIR+"/rooms/x53y19z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
