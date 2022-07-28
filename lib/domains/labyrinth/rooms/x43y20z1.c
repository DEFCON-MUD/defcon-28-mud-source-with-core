inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 1 }));
  set_short( "Hallway - x43y20z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y20z1.c",
  "east" : DIR+"/rooms/x44y20z1.c",
  "north" : DIR+"/rooms/x43y21z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
