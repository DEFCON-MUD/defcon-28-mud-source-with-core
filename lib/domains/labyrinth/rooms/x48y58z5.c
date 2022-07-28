inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 58, 5 }));
  set_short( "Passage - x48y58z5" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y58z5.c",
  "east" : DIR+"/rooms/x49y58z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
