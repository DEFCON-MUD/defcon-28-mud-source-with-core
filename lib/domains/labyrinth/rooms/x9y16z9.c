inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 16, 9 }));
  set_short( "Hallway - x9y16z9" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y16z9.c",
  "east" : DIR+"/rooms/x10y16z9.c",
  "south" : DIR+"/rooms/x9y15z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
