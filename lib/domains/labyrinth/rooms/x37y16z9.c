inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 9 }));
  set_short( "Passage - x37y16z9" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y16z9.c",
  "south" : DIR+"/rooms/x37y15z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
