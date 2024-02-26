inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 48, 2 }));
  set_short( "Passage - x54y48z2" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y48z2.c",
  "east" : DIR+"/rooms/x55y48z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
