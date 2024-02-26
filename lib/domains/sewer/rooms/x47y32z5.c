inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 5 }));
  set_short( "Passage - x47y32z5" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y33z5.c",
  "south" : DIR+"/rooms/x47y31z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
