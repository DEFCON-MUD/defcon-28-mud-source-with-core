inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 44, 6 }));
  set_short( "Hallway - x51y44z6" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y44z6.c",
  "east" : DIR+"/rooms/x52y44z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
