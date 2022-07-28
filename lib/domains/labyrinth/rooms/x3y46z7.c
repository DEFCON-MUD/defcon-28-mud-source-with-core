inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 7 }));
  set_short( "Passage - x3y46z7" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y47z7.c",
  "south" : DIR+"/rooms/x3y45z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
