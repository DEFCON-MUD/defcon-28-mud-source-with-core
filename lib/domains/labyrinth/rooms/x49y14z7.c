inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 7 }));
  set_short( "Corridor - x49y14z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y14z7.c",
  "south" : DIR+"/rooms/x49y13z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
