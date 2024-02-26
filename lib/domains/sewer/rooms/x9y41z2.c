inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 2 }));
  set_short( "Hallway - x9y41z2" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z2.c",
  "south" : DIR+"/rooms/x9y40z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
