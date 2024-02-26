inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 56, 7 }));
  set_short( "Passage - x15y56z7" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y56z7.c",
  "east" : DIR+"/rooms/x16y56z7.c",
  "north" : DIR+"/rooms/x15y57z7.c",
  "south" : DIR+"/rooms/x15y55z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
