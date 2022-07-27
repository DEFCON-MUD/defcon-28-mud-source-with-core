inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 7 }));
  set_short( "Hallway - x59y6z7" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y6z7.c",
  "east" : DIR+"/rooms/x60y6z7.c",
  "south" : DIR+"/rooms/x59y5z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
