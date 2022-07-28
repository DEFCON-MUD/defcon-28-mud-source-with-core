inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 58, 8 }));
  set_short( "Hallway - x48y58z8" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y58z8.c",
  "east" : DIR+"/rooms/x49y58z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
