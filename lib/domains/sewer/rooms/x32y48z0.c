inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 48, 0 }));
  set_short( "Hallway - x32y48z0" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y48z0.c",
  "east" : DIR+"/rooms/x33y48z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
