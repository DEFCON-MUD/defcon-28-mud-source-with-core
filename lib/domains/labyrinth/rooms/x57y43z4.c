inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 43, 4 }));
  set_short( "Corridor - x57y43z4" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y44z4.c",
  "south" : DIR+"/rooms/x57y42z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
