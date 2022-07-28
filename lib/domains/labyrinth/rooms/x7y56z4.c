inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 4 }));
  set_short( "Hallway - x7y56z4" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y56z4.c",
  "south" : DIR+"/rooms/x7y55z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
