inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 52, 1 }));
  set_short( "Passage - x47y52z1" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y52z1.c",
  "south" : DIR+"/rooms/x47y51z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
