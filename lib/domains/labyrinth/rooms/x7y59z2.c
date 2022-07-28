inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 59, 2 }));
  set_short( "Passage - x7y59z2" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y60z2.c",
  "south" : DIR+"/rooms/x7y58z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
