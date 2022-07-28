inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 3, 4 }));
  set_short( "Corridor - x31y3z4" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y4z4.c",
  "south" : DIR+"/rooms/x31y2z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
