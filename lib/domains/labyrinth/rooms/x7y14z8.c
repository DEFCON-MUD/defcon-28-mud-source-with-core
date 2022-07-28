inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 8 }));
  set_short( "Passage - x7y14z8" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y14z8.c",
  "north" : DIR+"/rooms/x7y15z8.c",
  "south" : DIR+"/rooms/x7y13z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
