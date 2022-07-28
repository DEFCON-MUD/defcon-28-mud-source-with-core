inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 18, 8 }));
  set_short( "Hallway - x52y18z8" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y18z8.c",
  "east" : DIR+"/rooms/x53y18z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
