inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 8, 5 }));
  set_short( "Corridor - x50y8z5" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y8z5.c",
  "east" : DIR+"/rooms/x51y8z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
