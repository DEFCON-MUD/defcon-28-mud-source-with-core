inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 8 }));
  set_short( "Passage - x5y60z8" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z8.c",
  "east" : DIR+"/rooms/x6y60z8.c",
  "north" : DIR+"/rooms/x5y61z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
