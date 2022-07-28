inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 5 }));
  set_short( "Hallway - x45y52z5" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y52z5.c",
  "north" : DIR+"/rooms/x45y53z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
