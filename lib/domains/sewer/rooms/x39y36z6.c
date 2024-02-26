inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 6 }));
  set_short( "Passage - x39y36z6" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y37z6.c",
  "south" : DIR+"/rooms/x39y35z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
