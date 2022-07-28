inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 4 }));
  set_short( "Passage - x15y16z4" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y16z4.c",
  "north" : DIR+"/rooms/x15y17z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
