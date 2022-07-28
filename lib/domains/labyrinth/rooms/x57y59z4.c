inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 59, 4 }));
  set_short( "Passage - x57y59z4" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y60z4.c",
  "south" : DIR+"/rooms/x57y58z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
