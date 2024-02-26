inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 1 }));
  set_short( "Hallway - x7y22z1" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y22z1.c",
  "south" : DIR+"/rooms/x7y21z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
