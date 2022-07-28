inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 9, 5 }));
  set_short( "Corridor - x29y9z5" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y10z5.c",
  "south" : DIR+"/rooms/x29y8z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
