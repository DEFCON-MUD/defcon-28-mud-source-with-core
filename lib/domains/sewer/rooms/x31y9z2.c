inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 9, 2 }));
  set_short( "Passage - x31y9z2" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y10z2.c",
  "south" : DIR+"/rooms/x31y8z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
