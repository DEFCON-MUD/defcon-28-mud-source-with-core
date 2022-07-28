inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 8 }));
  set_short( "Passage - x27y52z8" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y52z8.c",
  "east" : DIR+"/rooms/x28y52z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
