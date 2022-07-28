inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 61, 8 }));
  set_short( "Passage - x51y61z8" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y62z8.c",
  "south" : DIR+"/rooms/x51y60z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
