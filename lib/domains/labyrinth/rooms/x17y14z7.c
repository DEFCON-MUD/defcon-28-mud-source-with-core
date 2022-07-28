inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 7 }));
  set_short( "Passage - x17y14z7" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y14z7.c",
  "south" : DIR+"/rooms/x17y13z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
