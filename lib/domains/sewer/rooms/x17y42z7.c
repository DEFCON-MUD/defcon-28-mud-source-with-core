inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 42, 7 }));
  set_short( "Passage - x17y42z7" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y42z7.c",
  "south" : DIR+"/rooms/x17y41z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
