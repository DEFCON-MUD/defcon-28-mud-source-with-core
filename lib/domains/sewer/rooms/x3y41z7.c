inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 41, 7 }));
  set_short( "Corridor - x3y41z7" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y42z7.c",
  "south" : DIR+"/rooms/x3y40z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
