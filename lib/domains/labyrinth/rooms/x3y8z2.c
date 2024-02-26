inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 2 }));
  set_short( "Corridor - x3y8z2" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "south" : DIR+"/rooms/x3y7z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
