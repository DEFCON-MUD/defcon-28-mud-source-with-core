inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 1 }));
  set_short( "Corridor - x33y8z1" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y8z1.c",
  "south" : DIR+"/rooms/x33y7z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
