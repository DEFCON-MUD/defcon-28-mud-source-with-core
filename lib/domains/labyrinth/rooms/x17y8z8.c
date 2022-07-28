inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 8, 8 }));
  set_short( "Passage - x17y8z8" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y8z8.c",
  "north" : DIR+"/rooms/x17y9z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
