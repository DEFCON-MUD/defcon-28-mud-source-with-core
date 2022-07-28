inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 41, 1 }));
  set_short( "Hallway - x53y41z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y42z1.c",
  "south" : DIR+"/rooms/x53y40z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
