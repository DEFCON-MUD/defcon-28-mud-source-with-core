inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 0, 7 }));
  set_short( "Passage - x30y0z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y0z7.c",
  "east" : DIR+"/rooms/x31y0z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
