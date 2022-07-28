inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 1 }));
  set_short( "Passage - x17y48z1" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y48z1.c",
  "south" : DIR+"/rooms/x17y47z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
