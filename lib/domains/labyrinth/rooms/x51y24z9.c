inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 9 }));
  set_short( "Corridor - x51y24z9" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y25z9.c",
  "south" : DIR+"/rooms/x51y23z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
