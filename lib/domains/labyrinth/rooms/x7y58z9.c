inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 9 }));
  set_short( "Hallway - x7y58z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y59z9.c",
  "south" : DIR+"/rooms/x7y57z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
