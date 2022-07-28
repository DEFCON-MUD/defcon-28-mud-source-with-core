inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 3, 8 }));
  set_short( "Hallway - x33y3z8" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y4z8.c",
  "south" : DIR+"/rooms/x33y2z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
