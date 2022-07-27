inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 25, 8 }));
  set_short( "Passage - x51y25z8" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y26z8.c",
  "south" : DIR+"/rooms/x51y24z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
