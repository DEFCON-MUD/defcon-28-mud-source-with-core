inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 14, 4 }));
  set_short( "Hallway - x15y14z4" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y14z4.c",
  "south" : DIR+"/rooms/x15y13z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
