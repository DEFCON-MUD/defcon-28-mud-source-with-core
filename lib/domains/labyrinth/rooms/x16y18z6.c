inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 18, 6 }));
  set_short( "Passage - x16y18z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y18z6.c",
  "east" : DIR+"/rooms/x17y18z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
