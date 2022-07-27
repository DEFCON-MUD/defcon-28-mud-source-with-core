inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 55, 1 }));
  set_short( "Hallway - x39y55z1" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y56z1.c",
  "south" : DIR+"/rooms/x39y54z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
