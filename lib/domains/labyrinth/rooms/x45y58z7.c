inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 58, 7 }));
  set_short( "Passage - x45y58z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y58z7.c",
  "east" : DIR+"/rooms/x46y58z7.c",
  "south" : DIR+"/rooms/x45y57z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
