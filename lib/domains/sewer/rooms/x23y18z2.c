inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 18, 2 }));
  set_short( "Corridor - x23y18z2" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y18z2.c",
  "south" : DIR+"/rooms/x23y17z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
