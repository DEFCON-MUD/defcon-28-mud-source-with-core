inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 61, 9 }));
  set_short( "Hallway - x9y61z9" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y62z9.c",
  "south" : DIR+"/rooms/x9y60z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
