inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 24, 7 }));
  set_short( "Hallway - x49y24z7" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y24z7.c",
  "south" : DIR+"/rooms/x49y23z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
