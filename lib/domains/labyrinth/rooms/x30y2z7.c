inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 2, 7 }));
  set_short( "Hallway - x30y2z7" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y2z7.c",
  "east" : DIR+"/rooms/x31y2z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
