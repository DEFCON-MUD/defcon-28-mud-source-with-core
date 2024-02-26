inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 1 }));
  set_short( "Passage - x15y20z1" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z1.c",
  "south" : DIR+"/rooms/x15y19z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
