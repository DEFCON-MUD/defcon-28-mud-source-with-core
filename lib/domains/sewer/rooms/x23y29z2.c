inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 29, 2 }));
  set_short( "Passage - x23y29z2" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y30z2.c",
  "south" : DIR+"/rooms/x23y28z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
