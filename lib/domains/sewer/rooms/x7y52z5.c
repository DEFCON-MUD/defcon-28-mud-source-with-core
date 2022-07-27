inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 5 }));
  set_short( "Passage - x7y52z5" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y52z5.c",
  "north" : DIR+"/rooms/x7y53z5.c",
  "south" : DIR+"/rooms/x7y51z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
