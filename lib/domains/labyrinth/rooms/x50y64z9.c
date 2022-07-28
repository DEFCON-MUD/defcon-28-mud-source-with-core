inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 9 }));
  set_short( "Corridor - x50y64z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z9.c",
  "east" : DIR+"/rooms/x51y64z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
