inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 21, 9 }));
  set_short( "Hallway - x15y21z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y22z9.c",
  "south" : DIR+"/rooms/x15y20z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
