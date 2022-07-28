inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 38, 5 }));
  set_short( "Corridor - x7y38z5" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y38z5.c",
  "south" : DIR+"/rooms/x7y37z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
