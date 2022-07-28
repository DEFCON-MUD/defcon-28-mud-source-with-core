inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 3, 6 }));
  set_short( "Hallway - x45y3z6" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y4z6.c",
  "south" : DIR+"/rooms/x45y2z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
