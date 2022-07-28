inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 42, 8 }));
  set_short( "Hallway - x17y42z8" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y42z8.c",
  "north" : DIR+"/rooms/x17y43z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
