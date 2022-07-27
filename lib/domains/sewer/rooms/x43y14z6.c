inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 6 }));
  set_short( "Hallway - x43y14z6" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y15z6.c",
  "south" : DIR+"/rooms/x43y13z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
