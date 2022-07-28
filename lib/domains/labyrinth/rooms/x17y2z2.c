inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 2 }));
  set_short( "Passage - x17y2z2" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y2z2.c",
  "east" : DIR+"/rooms/x18y2z2.c",
  "north" : DIR+"/rooms/x17y3z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
