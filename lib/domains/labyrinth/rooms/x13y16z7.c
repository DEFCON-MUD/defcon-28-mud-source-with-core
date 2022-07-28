inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 7 }));
  set_short( "Hallway - x13y16z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y16z7.c",
  "east" : DIR+"/rooms/x14y16z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
