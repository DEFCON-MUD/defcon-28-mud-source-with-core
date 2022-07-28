inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 30, 2 }));
  set_short( "Hallway - x5y30z2" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y30z2.c",
  "east" : DIR+"/rooms/x6y30z2.c",
  "south" : DIR+"/rooms/x5y29z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
