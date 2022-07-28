inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 4 }));
  set_short( "Hallway - x9y30z4" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y30z4.c",
  "east" : DIR+"/rooms/x10y30z4.c",
  "north" : DIR+"/rooms/x9y31z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
