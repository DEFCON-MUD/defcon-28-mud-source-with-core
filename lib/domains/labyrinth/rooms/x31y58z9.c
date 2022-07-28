inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 9 }));
  set_short( "Hallway - x31y58z9" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y58z9.c",
  "north" : DIR+"/rooms/x31y59z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
