inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 29, 8 }));
  set_short( "Hallway - x17y29z8" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y30z8.c",
  "south" : DIR+"/rooms/x17y28z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
