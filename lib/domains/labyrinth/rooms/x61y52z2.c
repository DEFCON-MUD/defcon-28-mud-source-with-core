inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 2 }));
  set_short( "Corridor - x61y52z2" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z2.c",
  "south" : DIR+"/rooms/x61y51z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
