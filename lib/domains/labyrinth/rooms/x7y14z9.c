inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 9 }));
  set_short( "Passage - x7y14z9" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y15z9.c",
  "south" : DIR+"/rooms/x7y13z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
