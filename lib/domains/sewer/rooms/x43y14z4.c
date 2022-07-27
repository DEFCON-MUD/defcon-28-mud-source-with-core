inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 4 }));
  set_short( "Hallway - x43y14z4" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y14z4.c",
  "south" : DIR+"/rooms/x43y13z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
