inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 1 }));
  set_short( "Hallway - x47y56z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y56z1.c",
  "east" : DIR+"/rooms/x48y56z1.c",
  "south" : DIR+"/rooms/x47y55z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
