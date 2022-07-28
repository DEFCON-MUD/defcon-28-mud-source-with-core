inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 0, 4 }));
  set_short( "Hallway - x52y0z4" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y0z4.c",
  "east" : DIR+"/rooms/x53y0z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
