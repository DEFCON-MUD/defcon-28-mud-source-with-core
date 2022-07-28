inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 7 }));
  set_short( "Hallway - x31y14z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y15z7.c",
  "south" : DIR+"/rooms/x31y13z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
