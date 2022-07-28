inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 59, 6 }));
  set_short( "Hallway - x43y59z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y60z6.c",
  "south" : DIR+"/rooms/x43y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
