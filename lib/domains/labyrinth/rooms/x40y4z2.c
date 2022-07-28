inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 4, 2 }));
  set_short( "Corridor - x40y4z2" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y4z2.c",
  "east" : DIR+"/rooms/x41y4z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
