inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 4 }));
  set_short( "Passage - x3y16z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y17z4.c",
  "south" : DIR+"/rooms/x3y15z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
