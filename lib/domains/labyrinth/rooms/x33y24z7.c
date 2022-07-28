inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 7 }));
  set_short( "Passage - x33y24z7" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y25z7.c",
  "south" : DIR+"/rooms/x33y23z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
